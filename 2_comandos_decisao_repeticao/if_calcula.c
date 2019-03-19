#include <stdio.h>

int main(void){
    float num1, num2;
    char op;

    printf("Digite a expressão: ");
    scanf("%f %c %f", &num1, &op, &num2);

    switch(op){
        case '+':
            printf("%.2f + %.2f = %.2f", num1, num2, num1+num2);
        case '-':
            printf("%.2f - %.2f = %.2f", num1, num2, num1-num2);
        case '*':
            printf("%.2f * %.2f = %.2f", num1, num2, num1*num2);
        case '/':
            printf("%.2f / %.2f = %.2f", num1, num2, num1/num2);
            break;
    // }else{
    //     printf("Operador '%c' inválido!", op);
    }

    return 0;
}


