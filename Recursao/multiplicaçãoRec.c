#include <stdio.h>

int func(int m, int n){
    if(n == 1) return m;
    else return m + func(m, n - 1);
}

int main(){
    printf("\n%d\n\n", func(5,3));

    return 0;
}