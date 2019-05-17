#include <stdio.h>

int var = 9;

int funcao(int n){
    var = n+10;
    printf("Valor de Var= %d\n", var);
    return n;
}

int main(){
    int x = 10;
    printf("Var = %d\n", var);
    int retorno = funcao(x);
    printf("X = %d\n", x);
    printf("Retorno = %d\n", retorno);
    printf("Var = %d", var);
    return 0;
}