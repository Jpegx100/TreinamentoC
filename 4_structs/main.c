#include <stdio.h>
#include <math.h>

struct ponto{
    int x, y;
};
// typedef struct ponto Ponto;

struct retangulo{
    struct ponto p1, p2;
};

int main(){
    struct retangulo ret;
    struct ponto ponto_buscado;
    printf("Entre com o X e Y do Ponto 1: ");
    scanf("%d %d", &ret.p1.x, &ret.p1.y);

    printf("Entre com o X e Y do Ponto 2: ");
    scanf("%d %d", &ret.p2.x, &ret.p2.y);

    printf("Entre com o X e Y do Ponto Buscado: ");
    scanf("%d %d", &ponto_buscado.x, &ponto_buscado.y);

    if (ret.p1.x < ret.p2.x) {
        r.p1.x = ret.p1.x;
        r.p2.x = ret.p2.x;
    }
    else {
        r.p1.x = ret.p2.x;
        r.p2.x = ret.p1.x;
    }
    if (ret.p1.y < ret.p2.y) {
        r.p1.y = ret.p2.y;
        r.p2.y = ret.p1.y;
    }
    else {
        r.p1.y = ret.p1.y;
        r.p2.y = ret.p2.y;
    }


    if(
        (ponto_buscado.x > ret.p1.x) &&
        (ponto_buscado.x < ret.p2.x) &&
        (ponto_buscado.y < ret.p1.y) &&
        (ponto_buscado.y > ret.p2.y)
    ){
        printf("O PONTO ESTÁ DENTRO");
    }else{
        printf("O PONTO ESTÁ FORA");
    }
}