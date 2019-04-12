#include <stdio.h>

int main(void){
    int num;
    printf("Quantos alunos quer processar? ");
    scanf("%d", &num);

    float notas[num];
    float media=0;
    int i;

    printf("Digite as notas dos estudantes\n");
    for(i=0; i<num; i++){
        printf("Nota do estudande %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    for(i=0; i<num ; i++)
        media = media + notas[i];
    media = media / num;
    for(i=0; i<num ; i++){
        if(notas[i] > media)
            printf("Maior que a média: %.2f\n", notas[i]);
    }

    return 0;
}
