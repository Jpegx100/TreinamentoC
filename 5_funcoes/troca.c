#include <stdio.h>

void troca(int *n, int *m){
    int aux;
    aux = *n;
    *n = *m;
    *m = aux;
}

int main(){
    int a=5, b=11;

    printf("A = %d - ", a);
    printf("B = %d\n", b);
    troca(&a, &b);
    printf("A = %d - ", a);
    printf("B = %d\n", b);

    return 0;
}