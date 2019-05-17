#include <stdio.h>
#include <math.h>
#define PI 3.1415

int main(){
    float raio, volume;

    printf("Qual o raio da esfera? ");
    scanf("%f", &raio);

    volume = ((float)4/3) * PI * pow(raio, 3);
    printf("O volume da esfera é: %.2f", volume);

    return 0;
}