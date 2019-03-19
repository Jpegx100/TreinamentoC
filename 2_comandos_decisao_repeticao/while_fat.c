#include <stdio.h>

int main(void){
    int num, fat=1;

    printf("Digite o número para o qual deseja saber o fatorial: ");
    scanf("%d", &num);

    while(num>1){
        // fat *= --num;
        // fat = fat * (num--);
        fat = fat * num;
        --num;
    }

    printf("Fatorial = %d", fat);

    return 0;
}
