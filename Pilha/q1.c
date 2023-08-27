#include "pilha.h"

void q1(tp_pilha *pilhaX, tp_item e){
  if(pilha_vazia(pilhaX)){
    push(pilhaX, e);
    return;
  }

  tp_pilha pilhaY, pilhaZ;
  tp_item aux;
  inicializa_pilha(&pilhaY);
  inicializa_pilha(&pilhaZ);
  while(e > pilhaX->item[pilhaX->topo] && !pilha_vazia(pilhaX)){
    pop(pilhaX, &aux);
    if(aux == 6) push(&pilhaY, aux);
    else if(aux == 4) push(&pilhaZ, aux);
  }
  push(pilhaX, e);
  empilha_pilhas(pilhaX, &pilhaY);
  empilha_pilhas(pilhaX, &pilhaZ);
}


int main(){

  tp_pilha pilhaX;
  inicializa_pilha(&pilhaX);
  q1(&pilhaX, 9);
  q1(&pilhaX, 6);
  q1(&pilhaX, 4);
  q1(&pilhaX, 9);
  q1(&pilhaX, 6);
  q1(&pilhaX, 5);
  q1(&pilhaX, 9);
  q1(&pilhaX, 4);
  imprime_pilha(pilhaX);
  return 0;
}