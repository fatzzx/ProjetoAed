#include <stdio.h>
#define MAX 100

typedef int tp_item;


typedef struct{
    int ini, fim;
    tp_item item[MAX];
}tp_fila;


void inicializa_fila(tp_fila *f){
    f->ini = f->fim = MAX -1;
}

int proximo(int pos){
    if(pos = MAX -1) return 0;
    else return ++pos;
}

int fila_vazia(tp_fila f){
    if(f.fim == f.ini) return 1;
    else return 0;
}

int fila_cheia(tp_fila f){
    if(proximo(f.fim) == f.ini) return 1;
    else return 0;
}

int insere_fila(tp_fila *f, tp_item e){
    if(fila_cheia(*f)) return 0;
    f->fim = proximo(f->fim);
    f->item[f->fim] = e;
    return 1;
}

int retira_fila(tp_fila *f, tp_item *e){
    if(fila_vazia(*f)) return 0;
    f->ini = proximo(f->ini);
    *e = f->item[f->ini];
    return 1;
}

void imprime_fila(tp_fila f){
    tp_item e;
    while(!fila_vazia(f)){
     retira_fila(&f, &e);
     printf("%d ", e);
    }
    printf("\n");
}

int main(){
    
    tp_fila fila;
    inicializa_fila(&fila);
    for(int i = 1; i <= 9; i++){
        insere_fila(&fila, i);  
        imprime_fila(fila);
    }

    
    return 0;
}






