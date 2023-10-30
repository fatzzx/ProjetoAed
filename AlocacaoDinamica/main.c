#include <stdio.h>
#include <stdlib.h>

void aloca(int **mat){
    for(int i = 0; i < 5; i++){
        mat[i] = (int*) malloc(5 * sizeof(int));
    }
}

void libera(int **mat){
    for(int i = 0; i < 5; i++){
        free(mat[i]);
    }
}

int main(){

    int **mat =(int**) malloc(5 * sizeof(int*));
    aloca(mat);    

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            mat[i][j] = 1;
        }
    }

    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    libera(mat);
    free(mat);
    return 0;
}
