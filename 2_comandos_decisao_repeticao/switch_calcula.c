#include <stdio.h>

int main(void){
    float num1, num2;
    char op;
    int continua = 1;

    while(continua==1){
        printf("Digite a expressão: ");
        scanf("%f %c %f", &num1, &op, &num2);

        switch(op){
            case '+':
                printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
                break;
            case '-':
                printf("%.2f - %.2f = %.2f", num1, num2, num1-num2);
                break;
            case '*':
                printf("%.2f * %.2f = %.2f", num1, num2, num1*num2);
                break;
            case '/':
                printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
                break;
            default:
                printf("Operando '%c' inválido!", op);
        }

        printf("\nVocê deseja executar outra operação? [1-Sim, 2-Não]");
        scanf("%d", &continua);
    }

    return 0;
}


