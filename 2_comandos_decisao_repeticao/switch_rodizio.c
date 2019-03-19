#include <stdio.h>

int main(void){
    char placa;

    printf("Final da placa: ");
    scanf("%d", &placa);

    switch(placa){
        case 1:
            printf("asdfasdf");
        case 2:
            printf("Não circula segunda-feira");
            break;
        case 3: case 4:
            printf("Não circula terça-feira");
            break;
        case 5: case 6:
            printf("Não circula quarta-feira");
            break;
        case 7: case 8:
            printf("Não circula quinta-feira");
            break;
        case 9: case 0:
            printf("Não circula sexta-feira");
            break;
    }

    return 0;
}

