#include <stdio.h>

int main(){
    float nota1, nota2, nota3, resultado;
    char primeira_letra;

    printf("Entre com as notas: ");
    scanf("%f %f %f", &nota1, &nota2, &nota3);

    resultado = (nota1 + nota2 + nota3) / 3.0;
    printf("Média: %f\n", resultado);

    printf("Primeira letra do nome: ");
    setbuf(stdin, NULL);
    scanf("%c", &primeira_letra);

    if(primeira_letra == 'X'){
        if(resultado>=3){
            printf("APROVADO");
        }else{
            printf("REPROVADO");
        }
    }

    if(resultado>=7){
        printf("APROVADO");
    }else{
        printf("REPROVADO");
    }

    return 0;
}