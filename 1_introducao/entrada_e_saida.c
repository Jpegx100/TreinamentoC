#include <stdio.h>

int main(void){
    int valor1, valor2, soma;

    printf("Entre com o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Entre com o segundo valor: ");
    scanf("%d", &valor2);

    soma = valor1 + valor2;

    printf("A soma é: %d", soma);

    return 0;
}


