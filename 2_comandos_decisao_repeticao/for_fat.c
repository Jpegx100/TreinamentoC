#include <stdio.h>

int main(void){
    int num, fat=1;

    printf("Digite o número para o qual deseja saber o fatorial: ");
    scanf("%d", &num);

    for( ; num>1 ; num--){
        fat *= num;
    }
    

    printf("Fatorial = %d", fat);

    return 0;
}
