#include <stdio.h>

void qsoussa(int M[][7], int l, int c, int sumA, int vAux[], int auxTam) {
    if (l >= 7 || c >= 7) {
        return;
    }

    vAux[auxTam] = M[l][c];
    auxTam++;

    if (sumA + M[l][c] == 10 && auxTam >= 3) {
        printf("Sequencia encontrada: ");
        for (int i = 0; i < auxTam; i++) {
            printf("%d ", vAux[i]);
        }
        printf("\n");
    }

    qsoussa(M, l + 1, c, sumA + M[l][c], vAux, auxTam);
    qsoussa(M, l, c + 1, sumA + M[l][c], vAux, auxTam);
}

int main() {
    int matriz[7][7] = {
        {0, 1, 2, 4, 5, 8, 9},
        {1, 2, 7, 8, 2, 5, 9},
        {2, 4, 6, 5, 1, 3, 1},
        {3, 2, 1, 4, 3, 9, 8},
        {10, 2, 1, 5, 8, 4, 9},
        {8, 9, 5, 4, 2, 1, 10},
        {5, 2, 3, 1, 5, 6, 7}
    };

    int vAux[49];

    qsoussa(matriz, 0, 0, 0, vAux, 0);

    return 0;
}

