#include <stdio.h>

int main(void){
    int vetor[5] = {2, 65, 12, 45, 45};
    int copia[5];

    for(int i=0; i<5; i++)
        printf("%d\n", vetor[i]);
    printf("----------\n");
    for(int i=0; i<5; i++)
        copia[i] = vetor[i];

    for(int i=0; i<5; i++)
        printf("%d\n", copia[i]);
    return 0;
}

