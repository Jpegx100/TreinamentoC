// Faça um algoritmo que leia os valores de um vetor
// inteiro de tamanho 10, e imprima o valor da
// soma dos números ímpares presentes neste vetor.
#include <stdio.h>

int main(){
    int valores[5];
    int i, soma=0;

    for(i=0; i<5 ; i++){
        printf("Escreva o %dº valor: ", i+1);
        scanf("%d", &valores[i]);
    }

    for(i=0; i<5 ; i++){
        if(valores[i]%2 != 0){
            soma = soma + valores[i];
        }
    }

    printf("%d", soma);

    return 0;
}