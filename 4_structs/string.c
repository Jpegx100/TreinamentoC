// Faça um programa que leia uma string do teclado e
// substitua cada caractere 'a' ou 'A' por seu sucessor.
#include <stdio.h>
#include <string.h>

int main(){
    char texto[5];
    int i;
    scanf("%s", texto);

    for(i=0; i<3 ; i++){
        if(texto[i] == 'a' || texto[i] == 'A'){
            texto[i] = texto[i+1];
        }
    }
    printf("%s", texto);
}