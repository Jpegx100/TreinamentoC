#include <stdio.h>

int main(void){
    int matriz[3][3];
    int soma=0;

    printf("Digite os valores\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Item[%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            soma += matriz[i][j];
        }
    }
    printf("Total: %d", soma);

    return 0;
}
