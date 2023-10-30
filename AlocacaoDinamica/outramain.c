#include <stdio.h>
#include <stdlib.h>

int main(){
    int j, a, *pj, **ppj;
    pj = &j;
    ppj = &pj;
    **ppj = 1;
    *ppj = &a;
    **ppj = 1;


    return 0;
}