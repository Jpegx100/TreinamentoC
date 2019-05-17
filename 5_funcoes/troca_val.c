#include <stdio.h>

void incrementa(int *n){
    *n = *n + 1;
    printf("N = %d\n", *n);
}

int main(){
    int a=5;

    printf("A = %d\n", a);
    incrementa(&a);
    printf("A = %d\n", a);

    return 0;
}