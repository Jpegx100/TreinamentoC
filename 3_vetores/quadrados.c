#include <stdio.h>

int main(void){
    int vetor[5] = {2, 65, 12, 45, 45};
    int quads[5];

    for(int i=0; i<5; i++){
        quads[i] = vetor[i]*vetor[i];
        printf("QUADRADO DE %d é %d\n", vetor[i], quads[i]);
    }
    return 0;
}

