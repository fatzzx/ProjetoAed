#include "pilha.h"

int jogo()
{
    int i, q, b, soma, c;
    printf("monte o primeiro deck\n");
    tp_pilha d1, d2, d3;
    tp_item e, e1, e2, e3;
    inicializa_pilha(&d1);
    inicializa_pilha(&d2);
    inicializa_pilha(&d3);
    for (i = 0; i < 5; i++)
    {
        printf("digite o valor da carta (0 a 9)\n");
        scanf("%d", &e);
        push(&d1, e);
    }
    printf("monte o segundo deck\n");
    for (i = 0; i < 5; i++)
    {
        printf("digite o valor da carta (0 a 9)\n");
        scanf("%d", &e);
        push(&d2, e);
    }
    printf("monte o terceiro deck\n");
    for (i = 0; i < 5; i++)
    {
        printf("digite o valor da carta (0 a 9)\n");
        scanf("%d", &e);
        push(&d3, e);
    }
    c = 1;
    while ((!pilha_vazia(&d1)) || (!pilha_vazia(&d2)) || (!pilha_vazia(&d3)))
    {
        printf("RODADA %d: ", c);
        printf("a pilha 1 esta com %d cartas, a pilha 2 esta com %d cartas e a pilha 3 com %d cartas\n", altura_pilha(&d1), altura_pilha(&d2), altura_pilha(&d3));
        b = 1;
        i = 0;
        e1 = 0;
        e2 = 0;
        e3 = 0;
        while ((b) && i < 3)
        {
            printf("de onde deseja retirar a carta?(1, 2 ou 3)\n");
            scanf("%d", &q);
            switch (q)
            {
            case 1:
                pop(&d1, &e1);
                soma = e1 + e2 + e3;
                printf("a soma atual eh de %d\n", soma);
                printf("deseja retirar outra carta?(sim = 1, nao = 0)\n");
                scanf("%d", &b);
                break;
            case 2:
                pop(&d2, &e2);
                soma = e1 + e2 + e3;
                printf("a soma atual eh de %d\n", soma);
                printf("deseja retirar outra carta?(sim = 1, nao = 0)\n");
                scanf("%d", &b);
                break;
            case 3:
                pop(&d3, &e3);
                soma = e1 + e2 + e3;
                printf("a soma atual eh de %d\n", soma);
                printf("deseja retirar outra carta?(sim = 1, nao = 0)\n");
                scanf("%d", &b);
                break;
            default:
                printf("opcao invalida, digite novamente\n");
                break;
            }
            i++;
        }
        c++;
        if (soma % 3 != 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int v;
    v = jogo();
    if (v == 0)
        printf("perdeu bobao");
    else if (v == 1)
    {
        printf("venceu bonzao");
    }
}