// A sequência Fibonacci é uma sequência de números inteiros começando por 0 e
// 1 na qual cada termo subsequente corresponde à soma dos dois anteriores, na
// forma “0, 1, 1, 2, 3, 5, 8, ...”. Escreva um programa que solicite do usuário o
// número N de termos da sequência Fibonacci e um caractere qualquer C. Com X
// sendo cada um dos termos da sequência Fibonacci até o N-ésimo termo seu
// programa deve imprimir N linhas, contendo cada uma o caractere C repetido X
// vezes. Por exemplo, tendo N=6 e C=“a” o programa deve imprimir:
// _
// a
// a
// aa
// aaa
// aaaaa
#include <stdio.h>
#include <stdlib.h>

int main(){
    int num_termos, ant=1, ant_ant=0, atual=1;
    char caractere;

    printf("Informe número de termos: ");
    scanf("%d", &num_termos);
    printf("Informe o caractere: ");
    setbuf(stdin, NULL);
    scanf("%c", &caractere);

    for(int i=0; i<num_termos ; i++){

        if(i==0){
            printf("_\n");
            continue;
        }

        for(int j=0; j<atual ; j++){
            printf("%c", caractere);
        }

        atual = ant + ant_ant;
        ant_ant = ant;
        ant = atual;
        printf("\n");
    }

    return 0;
}