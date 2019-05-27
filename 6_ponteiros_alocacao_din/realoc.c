#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
    int *vetor;
    int i, continua, quant_itens=0;
    vetor = (int *)malloc(N*sizeof(int));
    do{
        for(i=0; i<N; i++){
            printf("[%dº] = ", i);
            scanf("%d", &vetor[quant_itens+i]);
            quant_itens++;
        }
        printf("DESEJA CONTINUAR?[1-SIM 0-NÃO] ");
        scanf("%d", &continua);
        if(continua==1){
            int tamanho = (quant_itens+N)*sizeof(int);
            printf("anandsfas");
            printf("TAM = %d", tamanho);
            vetor = (int *)realloc(vetor, 40);
        }
    }while(continua==1);

    printf("VALORES LIDOS\n");
    for(i=0; i<quant_itens; i++){
        printf("| %d |", vetor[i]);
    }
    return 0;
}