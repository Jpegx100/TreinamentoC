#include <stdio.h>
#define PI 3.141592

int main(void){
    // 2 PI R
    float raio, resultado;

    printf("Digite o raio: ");
    scanf("%f", &raio);

    resultado = 2 * PI * raio;
    printf("O comprimento é: %f", resultado);

    return 0;
}