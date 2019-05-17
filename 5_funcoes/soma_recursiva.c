#include <stdio.h>

int soma_rec(int n){
    if(n==0)
        return n;
    int soma = n + soma_rec(n-1);
    return soma;
}

int fatorial(int n){
    if(n == 1)
        return 1;
    int fat = n * fatorial(n-1) * fatorial(n-2);
    return fat;
}

int soma(int n){
    int i, soma=0;
    for(i=1; i<=n ; i++){
        soma += i;
    }
    return soma;
}

int main(){
    printf("SOMA = %d", soma_rec(5));
    return 0;
}