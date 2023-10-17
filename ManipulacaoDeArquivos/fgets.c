#include <stdio.h>

int main() {
    FILE *arquivo = fopen("meutxt.txt", "r");
    if (arquivo == NULL) {
        perror("Erro ao abrir o arquivo");
        return 1;
    }

    char linha[100]; // Buffer para armazenar a linha lida

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        printf("%s", linha); // Imprime a linha na tela
    }

    fclose(arquivo);
    return 0;
}