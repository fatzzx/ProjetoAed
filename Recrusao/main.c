#include <stdio.h>
#include <time.h>

unsigned long long int fibVector[51];

unsigned long long int fib(int n){

  if(n <= 1) return n;

  if(fibVector[n] != -1) return fibVector[n];

  fibVector[n] = fib(n - 1) + fib(n - 2);
  
  
  return fibVector[n];

}

unsigned long long int  fibonacci(int n){
	if (n == 1 || n == 2){
		return 1;
	}
	else {
		return fibonacci(n-2) + fibonacci(n-1);
	}
}



int main(void) {
  
  
  
  for(int i = 0; i < 51; i++){
    fibVector[i] = -1;
  }
  
  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);
  clock_t start_time = clock(); 
  printf("\nResultado deu: %u \n", fib(n+1));
  clock_t end_time = clock(); 
  double total_time = (double)(end_time - start_time) / CLOCKS_PER_SEC;
  printf("\nTempo total fib 1: %10f\n", total_time);
  printf("\nDigite um numero: "); 
  scanf("%d", &n);
  clock_t start_time2 = clock();
  printf("\nResultado deu: %u \n", fibonacci(n+1));
  clock_t end_time2 = clock(); 
  double total_time2 = (double)(end_time2 - start_time2) / CLOCKS_PER_SEC;
  printf("\nTempo total fib 2: %10f\n", total_time2);
  return 0;

  // fclose(data);
}