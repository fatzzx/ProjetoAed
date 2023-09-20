#include <stdio.h>

int main(){

    int vetor[5];

    for(int i = 0; i < 5; i++){
        vetor[i] = i;
    }

    for(int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }

    return 0;
}