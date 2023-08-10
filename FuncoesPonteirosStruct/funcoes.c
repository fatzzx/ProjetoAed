#include <stdio.h>

int soma(int parametro1, int parametro2){
  int resultado = parametro1 + parametro2;
  return resultado;
}

void imprimeSoma(int parametro1, int parametro2){
  int resultado = soma(parametro1, parametro2);
  printf("O valor da soma de igual a %d\n", resultado);
}

int main(){
  int a = 10;
  int b = 15;
  imprimeSoma(a, b);
  return 0;  
}