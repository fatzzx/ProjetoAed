#include "pilha.h"

int verificaJogo(tp_pilha pilhaA, tp_pilha pilhaB, tp_pilha pilhaC){
    
    tp_item a, b, c;

    while(!pilha_vazia(&pilhaA) && !pilha_vazia(&pilhaB) && !pilha_vazia(&pilhaC)){

        if(!pilha_vazia(&pilhaA)){



        }


    }

}


int main(){

    tp_pilha pilhaA, pilhaB, pilhaC;
    inicializa_pilha(&pilhaA);
    inicializa_pilha(&pilhaB);
    inicializa_pilha(&pilhaC);

    for(int i = 1; i <=5; i++){
        push(&pilhaA, i);
        push(&pilhaB, i);
        push(&pilhaC, i);
    }




}