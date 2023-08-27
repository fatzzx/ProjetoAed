#include <stdio.h>
#include <string.h>

typedef int tp_item;

typedef struct{
  int topo;
  tp_item item[(int)1e3]; 
}tp_pilha;

void inicializa_pilha(tp_pilha *pilha){
  pilha->topo = -1;
}

int pilha_vazia(tp_pilha pilha){
  if(pilha.topo == -1) return 1;
  else return 0;
}

int pilha_cheia(tp_pilha pilha){
  if(pilha.topo == ((int)1e3) - 1) return 1;
  else return 0;
}

int push(tp_pilha *pilha, tp_item e){

  if(pilha_cheia(*pilha)) return 0;
  pilha->topo++;
  pilha->item[pilha->topo] = e;
  
}

tp_item top(tp_pilha pilha){
  if(pilha.topo == -1) return 0;
  return pilha.item[pilha.topo];
}

int pop(tp_pilha *pilha){
  if(pilha_vazia(*pilha)) return 0;
  pilha->topo--;
  return 1;
}

int main(){

  int n, diamante;
  tp_pilha pilha;
  char expr[1000];
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    diamante = 0;
    inicializa_pilha(&pilha);
    scanf(" %s", expr);
    for(int j = 0; j < strlen(expr); j++){

      if(expr[j] == '<'){
        push(&pilha, '<');
      }

      else if(expr[j] == '>'){
        if(!pilha_vazia(pilha)){
          pop(&pilha);
          diamante++;
        }
      }
    }
    printf("%d\n", diamante);

  }

  return 0;
}






