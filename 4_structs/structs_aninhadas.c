#include <stdio.h>
#include <math.h>

struct ponto{
    int x, y;
};

struct circulo{
    struct ponto centro;
    float raio;
};

int main(){
    struct circulo circ;
    struct ponto p;

    printf("Digite as coordenadas do centro do círculo: ");
    scanf("%d %d", &circ.centro.x, &circ.centro.y);

    printf("Digite o raio do círculo: ");
    scanf("%f", &circ.raio);

    do{

        printf("Digite as coordenadas do ponto: ");
        scanf("%d %d", &p.x, &p.y);

        float quad_diferenca_x = pow(p.x - circ.centro.x, 2);
        float quad_diferenca_y = pow(p.y - circ.centro.y, 2);
        float distancia = sqrt(quad_diferenca_x + quad_diferenca_y);

        if(distancia <= circ.raio){
            printf("O ponto está DENTRO do círculo\n");
        }else{
            printf("O ponto está FORA do círculo\n");
        }

    }while(p.x!=circ.centro.x || p.y!=circ.centro.y);

    return 0;
}