#include "pilha.h"
#include <string.h>

int nrp(char *expr){
  int a, b, resultado;
  tp_pilha pilha;
  inicializa_pilha(&pilha);
  for(int i = 0; i < strlen(expr); i++){
    if(expr[i] == '+'){
      pop(&pilha, &a);
      pop(&pilha, &b);
      push(&pilha, b + a);
    }
    else if(expr[i] == '-'){
      pop(&pilha, &a);
      pop(&pilha, &b);
      push(&pilha, b - a);
    }
    else if(expr[i] == '*'){
      pop(&pilha, &a);
      pop(&pilha, &b);
      push(&pilha, b * a);
    }
    else if(expr[i] == '/'){
      pop(&pilha, &a);
      pop(&pilha, &b);
      push(&pilha, b / a);
    }
    else{
      push(&pilha, expr[i] - '0');
    }
  }
  top(&pilha, &resultado);
  return resultado;
}


int main(){
  printf("%d", nrp("84/53*+2-"));
  return 0;
}
