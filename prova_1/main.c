#include <stdio.h>
int soma(int x, int y){
    return x+y;
}

int fatorial(int n){
    int fat = 1;
    int i;
    for(i=1 ; i<n+1 ; i++){
        fat = fat * i;
    }
    return fat;
}

int soma_fatorial(int d, int w){
    int resultado;
    resultado = soma(fatorial(d), w);
    return resultado;
}

int main(){
    int a, b, z;
    scanf("%d %d", &a, &b);
    z = soma_fatorial(a, b);
    printf("FAT = %d", z);

    return 0;
}