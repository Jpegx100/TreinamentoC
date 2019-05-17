#include <stdio.h>

int var = 9;

int soma(int a, int b){
    int c;
    c = a + b;
    return c;
}

int main(){
    // int s;
    // s = soma(3, 5);
    // printf("SOMA = %d\n", s);

    int a;
    int *p;
    a = 5;
    printf("A = %d\n", a);
    printf("&A = %d\n", &a);
    p = &a;
    *p = 6;
    printf("A = %d", a);


    return 0;
}