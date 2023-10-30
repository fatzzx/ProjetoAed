#include <stdio.h>

int MaxVal(int *vet, int tam, int max) {
    
    for (int i = 1; i < tam; i++) {
        if (vet[i] > max) {
            max = vet[i];
        }
    }
    
    return max;
}

int MaxValRec(int *vet, int index, int max) {
    if (index == -1) return max;
    else {
        if (vet[index] > max) max = vet[index];
        return MaxValRec(vet, index - 1, max);
    }
}

int main() {
    int vet[5] = {10, 20, 100, 30, 5};

    printf("%d\n", MaxVal(vet, 5, vet[0]));
    printf("%d\n", MaxValRec(vet, 5, vet[0]));
    
    return 0;
}