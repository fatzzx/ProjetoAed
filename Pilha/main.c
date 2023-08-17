#include "pilha.h"

int main(){

  tp_pilha pilha;
  inicializa_pilha(&pilha);

  

  insere_pilha(&pilha, 10);
  insere_pilha(&pilha, 15);
  insere_pilha(&pilha, 20);
  insere_pilha(&pilha, 30);
  insere_pilha(&pilha, 40);
  remove_pilha2(&pilha);

  imprimir_elementos(pilha);



  return 0;
}