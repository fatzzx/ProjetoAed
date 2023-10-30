#include "pilha.h"
#include <string.h>

int verificaE(tp_pilha pilha){

    int count = 0;
    tp_item e;
    while(!pilha_vazia(&pilha)){
        pop(&pilha,&e);
        if(e == 'e') count++;
    }
    if(count == 1) return 1;
    else return 0;
}

int verificaOutrasLetras(tp_pilha pilha){

    tp_item e;
    while(!pilha_vazia(&pilha)){
        pop(&pilha,&e);
        if(e != 'd' && e != 'f' && e != 'e') return 0;      
    }
    return 1;
    }

int verificaDialeto(char *expr){

    tp_pilha pilha;
    inicializa_pilha(&pilha);
    for(int i = 0; i < strlen(expr); i++){
        push(&pilha, expr[i]);// expr + 1
    }
    if(!verificaE(pilha) || !verificaOutrasLetras(pilha)) return 0;

    tp_pilha pilhaAux;
    tp_item e;
    inicializa_pilha(&pilhaAux);

    while(pilha.item[pilha.topo] != 'e'){
        pop(&pilha, &e);
        push(&pilhaAux, e);
    }
    pop(&pilha, &e);

    if(pilhas_iguais(pilhaAux, pilha)) return 1;
    else return 0;

}

int main(){

    if(verificaDialeto("dfedf")){
        printf("Valido\n");
    } else{
        printf("Invalido\n");
    }

    return 0;
}