#include "fila.h"

tp_item func(tp_fila fila){
  tp_item e;
  while(tamanho_fila(fila) >= 2){
    remove_fila(&fila, &e);
    remove_fila(&fila, &e);
    insere_fila(&fila , e);
  }
  remove_fila(&fila, &e);
  return e;
}


int main(){
  int n = 7;
  tp_item e;
  tp_fila fila;
  inicializa_fila(&fila);
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) insere_fila(&fila, i);
  printf("%d", func(fila));
  return 0;
}

