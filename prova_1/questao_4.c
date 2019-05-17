#include <stdio.h>
#define N 5

typedef struct {
    char marca[16];
    int ano;
    float preco;
} carro;

int main(){
    carro carros[N];
    int i;
    float p;

    for(i=0; i<N ; i++){
        printf("-------CARRO %d-------\n", i+1);
        printf("Marca: ");
        setbuf(stdin, NULL);
        fgets(carros[i].marca, 16, stdin);
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        printf("Preço: ");
        scanf("%f", &carros[i].preco);
    }

    printf("Digite o valor: ");
    scanf("%f", &p);

    printf("\n\n");
    for(i=0; i<N ; i++){
        if(carros[i].preco <= p){
            printf("-------CARRO %d-------\n", i+1);
            printf("Marca: %s", carros[i].marca);
            printf("Ano: %d\n", carros[i].ano);
            printf("Preço: %f\n", carros[i].preco);
        }
    }

    return 0;
}