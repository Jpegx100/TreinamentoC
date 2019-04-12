#include <stdio.h>

int main(void){
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;
    float media=0;

    printf("Digite as notas dos 5 estudantes: ");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);
    scanf("%f", &n4);
    scanf("%f", &n5);
    scanf("%f", &n6);
    scanf("%f", &n7);
    scanf("%f", &n8);
    scanf("%f", &n9);
    scanf("%f", &n10);

    float media = (n1+n2+n3+n4+n5) / 5.0;
    if(n1 > media) printf("nota: %.2f\n", n1);
    if(n2 > media) printf("nota: %.2f\n", n2);
    if(n3 > media) printf("nota: %.2f\n", n3);
    if(n4 > media) printf("nota: %.2f\n", n4);
    if(n5 > media) printf("nota: %.2f\n", n5);

    return 0;
}
