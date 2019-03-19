// Um número primo é um número natural que tem apenas dois divisores
// diferentes: 1 e ele mesmo. Faça um programa que receba um número
// do usuário e diga se esse número é primo ou não.
#include <stdio.h>

int main(){
    int num, num_div=0;

    printf("Informe o número: ");
    scanf("%d", &num);

    for(int i=1; i<=(num/2); i++){
        if(num%i == 0){
            num_div++;
        }
    }

    if(num_div==1){
        printf("%d É PRIMO", num);
    }else{
        printf("%d NÃO É PRIMO", num);
    }
    return 0;
}