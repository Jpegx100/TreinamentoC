// Dados três números, verifique se eles podem ser medidas de um triângulo, e se
// puderem, classifique o triângulo como equilátero, isócele, ou escaleno.
#include <stdio.h>
#include <stdlib.h>

int main(){
    float a, b, c;

    printf("Informe as três medidas: ");
    scanf("%f %f %f", &a, &b, &c);

    if(
        (abs(b-c) < a) && (a < (b+c)) &&
        (abs(a-c) < b) && (b < (a+c)) &&
        (abs(a-b) < c) && (c < (a+b))
    ){
        if((a == b) && (b && c)){
            printf("TRIÂNGULO EQUILÁTERO");
        } else if((a==b) || (a == c) || (b == c)){
            printf("TRIÂNGULO ISÓSCELES");
        } else if((a != b) && (b != c)){
            printf("TRIÂNGULO ESCALENO");
        }
    }else{
        printf("NÃO É TRIÂNGULO");
    }

    return 0;
}