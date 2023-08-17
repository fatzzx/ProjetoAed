#include <stdio.h>
#include <stdlib.h>

void preenche(char **M){
    for(int i = 0; i < 10; i++){
        for(int j = 0 ; j < 10; j++){
            M[i][j] = 'a';
        }
    }
}

void print(char **M){
    for(int i = 0; i < 10; i++){
        for(int j = 0 ; j < 10; j++){
            printf("%c ", M[i][j]);
        }
    }
}

void libera_memoria(char **M){
    for(int i = 0; i < 10; i++){
        free(M[i]);
    }
    free(M);
}


int main()
{
    char **matriz;
    
    matriz = (char**) malloc(10 *  sizeof(char*));
    
    for(int i = 0; i < 10;i++){
        matriz[i] = (char*) malloc(10 * sizeof(char));    
    }
    
    preenche(matriz);
    print(matriz);
    libera_memoria(matriz);
    

    return 0;
}