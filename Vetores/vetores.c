#include <stdio.h>

int main(){

    //Criando um vetor com 101 posicoes
    int x[100];

    //Preenchendo o vetor de um a 100
    for(int i = 0; i <= 100; i++){
        x[i] = i;
    }

    //Imprimindo todos os elementos do vetor
    for(int i = 0; i <= 100; i++){
        printf("%d\n", x[i]);
    }

    //Imprimindo de forma decrescente 
    for(int i = 100; i >= 0; i--){
        printf("%d\n", x[i]);
    }

    return 1;
}