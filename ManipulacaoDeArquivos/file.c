#include <stdio.h>

int main(){
    FILE *arquivo;
    arquivo = fopen("/home/mouralitz/Área de trabalho/Coding/PJ_AED/ProjetoAed/ManipulacaoDeArquivos/meutxt.txt", "r");

    if(arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        
    }
    else {
        printf("Arquivo aberto com sucesso.\n");
        fclose(arquivo);
    }

    return 0;
}