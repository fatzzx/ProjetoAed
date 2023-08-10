#include <stdio.h>
#include <string.h>

int main(){

  //Criando um vetor de tipo char de 50 posicoes sendo 49 char`s e 1 "\0"
  char string1[50];
  char string2[50];

  /*
  Pode se usar %s para guardar o input na string direto sem precisar escanear cada posicao separadamente
  Porem se tiver algum espaco entre o input como "Projeto Aed" ele ira guardar apenas "Projeto" 
  */

  printf("Digite a primeira string\n");
  scanf(" %s", string1);

  //De mesma forma pode se imprimir a string direto sem precisar de um for para isso
  printf("%s\n", string1);  

  //Com esse scanf da para escanear uma string composta
  printf("Digite a segunda string\n");
  scanf(" %[^\n]s", string2);

  //Se imprime a string da mesma forma
  printf("%s\n", string2);

  //Se usa a funca strlen() para receber o tamanho da string
  printf("Tamanho da primeira string: %d\n", strlen(string1));

  //O strlen tambem conta os espacos em branco
  printf("Tamanho da segunda string: %d\n", strlen(string2));

  /*Comparando as strings usando strcmp, a strcmp retorna 0 se as strings forem iguais e retorna
   um valor maior que 0 se a string1 for lexicograficamente maior que a string2 e retorna um num
   menor que 0 se a string1 for lexicograficamente menor que a string2
  */
  int comp = strcmp(string1, string2);
  if (comp == 0) {
    printf("As strings são iguais.\n");
  } else if (comp < 0) {
    printf("A primeira string é menor que a segunda.\n");
  } else {
    printf("A primeira string é maior que a segunda.\n");
  }

  /* Procurando uma sub-string usando strstr,
  a strstr retorna um ponteiro para a primeira ocorrência de uma sub-string dentro de uma string maior.
  Se a sub-string não for encontrada, a função retorna NULL */
  char subString[20];
  printf("Digite uma sub-string para procurar na primeira string digitada:\n");
  scanf(" %s", subString);

  if (strstr(string1, subString) != NULL) {
    printf("A sub-string foi encontrada na primeira string.\n");
  } else {
    printf("A sub-string não foi encontrada na primeira string.\n");
  }

  return 1;
}