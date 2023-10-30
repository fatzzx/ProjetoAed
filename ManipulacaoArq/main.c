#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  FILE *arq = fopen("poema.txt", "r+");
  int c = 0;
  char *palavra = {"burrinho"};
  char palavraComparada[100];
  while(fgets(palavraComparada , sizeof(palavraComparada), arq) != NULL){

    if(strstr(palavraComparada, palavra) != NULL){
      c++;
    }
    
  }
  fprintf(arq,"Quantidade = %d", c);

  fclose(arq);
  return 0;
}