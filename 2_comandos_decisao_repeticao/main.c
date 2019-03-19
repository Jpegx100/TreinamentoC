#include <stdio.h>

int main(void){
    int cod, quant;
    float valor=0;
    int continua = 1;

    while(continua){

        printf("\nCÓDIGO: ");
        scanf("%d", &cod);
        printf("QUANTIDADE: ");
        scanf("%d", &quant);

        switch(cod){
            case 100:
                valor += quant * 1.7;
                printf("VALOR: %f", valor);
                break;
            case 101:
                valor = valor + quant * 2.3;
                printf("VALOR: %f", valor);
                break;
            default:
                printf("CÓDIGO INCORRETO");
        }
        printf("CONTINUA? [0-Não, Qualquer valor-SIM]");
        scanf("%d", &continua);
    }
    return 0;
}

