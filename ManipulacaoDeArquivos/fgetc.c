#include <stdio.h>

int main() {
    FILE *arquivo = fopen("meutxt.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    int caractere;

    while ((caractere = fgetc(arquivo)) != EOF) {
        putchar(caractere); // Imprime o caractere na tela
    }

    fclose(arquivo);
    return 0;
}