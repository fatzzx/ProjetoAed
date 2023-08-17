#ifndef PILHA_H
#define PILHA_H

#include <stdio.h>
#define TAMANHO_MAX 100

typedef int tp_item;

typedef struct{
  int topo;
  tp_item item[TAMANHO_MAX];
}tp_pilha;

void inicializa_pilha(tp_pilha *pilha){
  pilha->topo = -1;
}

int pilha_vazia(tp_pilha pilha){
  if(pilha.topo == -1) return 1;
  else return 0;
}

int pilha_cheia(tp_pilha pilha){
  if(pilha.topo == TAMANHO_MAX - 1) return 1;
  else return 0;
}

int pilha_vazia_ou_cheia(tp_pilha pilha){
  if(pilha_cheia(pilha) || pilha_vazia(pilha)) return 1;
  return 0;
}

int insere_pilha(tp_pilha *pilha, tp_item e){
  if(pilha_cheia(*pilha)) return 0;
  pilha->topo++;
  pilha->item[pilha->topo] = e;
  return 1;
}

tp_item item_topo(tp_pilha pilha){

  return pilha.item[pilha.topo];  

}

int remove_pilha(tp_pilha *pilha, tp_item *e){
  if(pilha_vazia(*pilha))return 0;
  *e = item_topo(*pilha);
  pilha->topo --;
  return 1;
}

int remove_pilha2(tp_pilha *pilha){
  if(pilha_vazia(*pilha))return 0;
  pilha->topo --;
  return 1;
}

void imprimir_elementos(tp_pilha pilha){
  while(!pilha_vazia(pilha)){
    printf("%d ", item_topo(pilha));
    remove_pilha2(&pilha);
  }
}

int tamanho_pilha(tp_pilha pilha){

  return ++pilha.topo;

}


#endif