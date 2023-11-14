#ifndef ARVOREBINARIADEBUSCA_H
#define ARVOREBINARIADEBUSCA_H

#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct arvoreBinariaDeBusca{
  tp_item info;
  struct arvoreBinariaDeBusca *esq;
  struct arvoreBinariaDeBusca *dir;
}arvoreBinariaDeBusca;


arvoreBinariaDeBusca *inicializaArvoreBinariaDeBusca(){return NULL;}
int arvoreBinariaDeBuscaVazia(arvoreBinariaDeBusca *a){return (a == NULL);}
arvoreBinariaDeBusca *alocaNoDeArvoreBinariaDeBusca(){return (arvoreBinariaDeBusca*) malloc(sizeof(arvoreBinariaDeBusca));}

int insereNaArvoreBinariaDeBusca(arvoreBinariaDeBusca **raiz, tp_item item){
  arvoreBinariaDeBusca *atu, *pai, *novoNo = alocaNoDeArvoreBinariaDeBusca();
  if(novoNo == NULL) return 0;
  novoNo->dir = novoNo->esq = NULL;
  novoNo->info = item;
  if(arvoreBinariaDeBuscaVazia(*raiz)) *raiz = novoNo;
  else{
    atu = *raiz;
    while(atu != NULL){
      pai = atu;
      if(atu->info > item) atu = atu->esq;
      else atu = atu->dir;
    }
    if(pai->info > item) pai->esq = novoNo;
    else pai->dir = novoNo;
  }
  novoNo = NULL;
  return 1;
}

void destroiArvoreBinariaDeBusca(arvoreBinariaDeBusca *raiz) {
  if (raiz != NULL) {
    destroiArvoreBinariaDeBusca(raiz->esq);
    destroiArvoreBinariaDeBusca(raiz->dir);  
    free(raiz); 
  }
}

void preOrdemNaArvoreDeBuscaBinaria(arvoreBinariaDeBusca *raiz){
  if(raiz != NULL){
    printf("%d ", raiz->info);
    preOrdemNaArvoreDeBuscaBinaria(raiz->esq);
    preOrdemNaArvoreDeBuscaBinaria(raiz->dir);
  }
}

void posOrdemNaArvoreDeBuscaBinaria(arvoreBinariaDeBusca *raiz){
  if(raiz != NULL){
    posOrdemNaArvoreDeBuscaBinaria(raiz->esq);
    posOrdemNaArvoreDeBuscaBinaria(raiz->dir);
    printf("%d ", raiz->info);
  }
}

void emOrdemNaArvoreDeBuscaBinaria(arvoreBinariaDeBusca *raiz){
  if(raiz != NULL){
    emOrdemNaArvoreDeBuscaBinaria(raiz->esq);
    printf("%d ", raiz->info);
    emOrdemNaArvoreDeBuscaBinaria(raiz->dir);
  }
}

int numeroNosDeArvoreBinariaDeBuscaRec(arvoreBinariaDeBusca *raiz){
  if(raiz != NULL) return 1 + numeroNosDeArvoreBinariaDeBuscaRec(raiz->esq) + numeroNosDeArvoreBinariaDeBuscaRec(raiz->dir);
}

int somaNosDeArvoreBinariaDeBuscaRec(arvoreBinariaDeBusca *raiz){
  if(raiz != NULL) return raiz->info + somaNosDeArvoreBinariaDeBuscaRec(raiz->esq) + somaNosDeArvoreBinariaDeBuscaRec(raiz->dir);
}


#endif