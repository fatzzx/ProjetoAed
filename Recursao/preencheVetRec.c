#include <stdio.h>

void preencheVet(int *v, int tam){
    if(tam == 5) return;
    else{
        v[tam] = tam;
        preencheVet(v, tam + 1);
    }
}

int main(){
    int v[5];
    preencheVet(v, 0);
    for(int i = 0; i < 5; i++){
        printf("%d ", v[i]);
    }

    return 0;
}