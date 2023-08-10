#include <stdio.h>

//Variavel Global, ela pode ser acessada em qualquer local deste arquivo
int valor = 100;

int funcao(int parametro){
    return valor * parametro;
}

int main(){

    printf("%d", funcao(10));

    for(int i = 0;i < 10; i++){
        int k = i;
    }

    /*As variaveis declaradas dentro do for nao podem ser acessadas fora dele*/

    return 0;
}