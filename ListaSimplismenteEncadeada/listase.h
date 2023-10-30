#ifndef LISTASE_H
#define LISTASE_H

#include <stdio.h>
#include <stdlib.h>

typedef int tp_item;

typedef struct{
    tp_item item;
    struct tp_listase *prox;
}tp_listase;

tp_listase* aloca_bloco(){
    return (tp_listase*) malloc(sizeof(tp_listase));
}

int vazia(tp_listase *l){
    return (l == NULL);
}

int aloca_fim(tp_listase **l, tp_item e){
    tp_listase *novo_no = aloca_bloco();
    if(novo_no == NULL) return 0;
    if(vazia(*l)) *l = novo_no;
    else{
        tp_listase *aux = *l;
        while(aux->prox != NULL){
            



        }
    }






}





#endif