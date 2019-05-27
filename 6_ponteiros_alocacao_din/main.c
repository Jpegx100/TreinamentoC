#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(){
    int *vetor, *aux;
    int i, j, continua, quant_itens=0;
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
            vetor = (int *)realloc(vetor, 3*sizeof(int));
            // int tamanho = (quant_itens+N)*sizeof(int);
            // aux = (int *)malloc(tamanho);
            // for(j=0 ; j<quant_itens ; j++){
            //     aux[j] = vetor[j];
            // }
            // vetor = aux;
        }
    }while(continua==1);

    printf("VALORES LIDOS\n");
    for(i=0; i<quant_itens; i++){
        printf("| %d |", vetor[i]);
    }
    free(vetor);
    return 0;
}