#include <stdio.h>
#include <stdlib.h>

void insertionSort(int *V, int tamanho){
  int i, chave;
  for(int j = 1; j < tamanho; j++){
    chave = V[j];
    i = j - 1;
    while(chave < V[i] && i >= 0){
      V[i + 1] = V[i];
      i--;
    }
    V[i + 1] = chave;
  }
}

int main(){
  int *vetor = (int*) malloc(10 * sizeof(int));
  for(int i = 9, j = 0; i >= 0; --i, ++j) vetor[i] = j;
  insertionSort(vetor, 10);
  for(int i = 0; i < 10; i++) printf("%d ", vetor[i]);
  free(vetor);
  return 0;
}
