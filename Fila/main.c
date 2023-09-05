#include "fila.h"

int main(){
  tp_fila fila;
  tp_item e;
  inicializa_fila(&fila);
  for(int i = 0; i < 10; i++) insere_fila(&fila, i);
  for(int i = 0; i < 5; i++) remove_fila(&fila, &e);
  imprime_fila(fila);

  return 0;
}