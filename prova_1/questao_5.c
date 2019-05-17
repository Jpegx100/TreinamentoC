#include <stdio.h>

int main(){
    char texto[16];
    int i, vogal=0;

    printf("Texto: ");
    setbuf(stdin, NULL);
    fgets(texto, 16, stdin);
    for(i=0; i<16 ; i++){
        switch(texto[i]){
            case 'a':
                vogal++;
                break;
            case 'e':
                vogal++;
                break;
            case 'i':
                vogal++;
                break;
            case 'o':
                vogal++;
                break;
            case 'u':
                vogal++;
                break;
            default:
                vogal = 0;
        }
        if(vogal==2){
            texto[i-1] = 'X';
            texto[i] = 'X';
            vogal = 0;
        }
    }

    printf("Texto modificado: %s", texto);

    return 0;
}