#include <stdio.h>
#include <math.h>
#define N 5

int main(){
    float salarios[N], salarios_reajustados[N];
    int i;

    for(i=0; i<N ; i++){
        printf("Digite o salário do funcionário %d: ", i+1);
        scanf("%f", &salarios[i]);
    }

    for(i=0; i<N ; i++){
        salarios_reajustados[i] = salarios[i] * 1.02;
    }

    printf("\n-----Salários dos funcionários-----\n|");
    for(i=0; i<N ; i++){
        printf(" %f |", salarios[i]);
    }

    printf("\n-----Salários reajustados-----\n|");
    for(i=0; i<N ; i++){
        printf(" %f |", salarios_reajustados[i]);
    }

    return 0;
}