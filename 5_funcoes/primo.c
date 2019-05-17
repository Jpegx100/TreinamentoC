#include <stdio.h>

int num_divisores(int n, int i){
    int divisores=0;
    if(n%i==0)
        divisores = 1;
    if(n==i)
        return divisores;
    else
        return divisores + primo_rec(n, i+1);
}

int primo(int n){
    int i, divisores = 0;
    for(i=1 ; i<=n ; i++){
        if(n%i==0)
            divisores++;
    }
    if(divisores == 2)
        return 1;
    else
        return 0;
}

int main(){
    int e_primo = primo_rec(5, 1);
    if(e_primo == 2)
        printf("É PRIMO");
    else
        printf("NÃO É PRIMO");
    return 0;
}