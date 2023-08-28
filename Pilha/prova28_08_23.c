#include "pilha.h"
#include <string.h>

int verificaE(tp_pilha pilha){
  int count = 0;
  tp_item e;
  while(!pilha_vazia(&pilha)){
    pop(&pilha, &e);
    if(e == 'e') count++;
  }
  if(count == 1) return 1;
  else return 0;
}

int verificaOutrosCharacters(tp_pilha pilha){
  tp_item e;
  while(!pilha_vazia(&pilha)){
    pop(&pilha, &e);
    if(e != 'e' && e != 'f' && e != 'd') return 0;
  }
  return 1;
}

int verificaDialeto(char *expr){
  tp_pilha pilha, pilhaAux;
  tp_item e;
  inicializa_pilha(&pilha);
  for(int i = 0; i < strlen(expr); i++){
    push(&pilha, expr[i]);
  }
  if(!verificaE(pilha) || !verificaOutrosCharacters(pilha)) return 0;
  inicializa_pilha(&pilhaAux);
  while(pilha.item[pilha.topo] != 'e'){
    pop(&pilha, &e);
    push(&pilhaAux, e);
  }
  pop(&pilha, &e);
  if(pilhas_iguais(pilha, pilhaAux)) return 1;
  else return 0;

}

int main(){


  printf("%d\n", verificaDialeto("ddfeddf"));


  return 0;
}