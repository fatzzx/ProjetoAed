#include "arvoreBinariaDeBusca.h"
#include <time.h>

int main(){

  arvoreBinariaDeBusca *arvore1 = inicializaArvoreBinariaDeBusca();
  srand(time(NULL));
  int numeroAleatorio;
  for(int i = 0; i < 10; i++){
    numeroAleatorio = rand() % 9 + 1;
    if(!insereNaArvoreBinariaDeBusca(&arvore1, numeroAleatorio)) printf("Deu B o");
  }

  emOrdemNaArvoreDeBuscaBinaria(arvore1);
  printf("\n%d nos e a soma e %d", numeroNosDeArvoreBinariaDeBuscaRec(arvore1), somaNosDeArvoreBinariaDeBuscaRec(arvore1));
  destroiArvoreBinariaDeBusca(arvore1);
  
  return 0;
}

