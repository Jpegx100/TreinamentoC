#include <stdio.h>

int main(){
    float consumo, tarifa, total=-1;
    int bandeira;

    printf("Qual o consumo em KWh? ");
    scanf("%f", &consumo);
    printf("Qual o valor da tarifa em R$? ");
    scanf("%f", &tarifa);
    printf("Qual a bandeira? [1 - Verde; 2 - Amarelo; 3 - Vermelha] ");
    scanf("%d", &bandeira);

    if(bandeira<1 || bandeira>3){
        printf("Bandeira inválida!");
    }else{
        switch(bandeira){
            case 1:
                total = consumo*tarifa;
                break;
            case 2:
                total = consumo*tarifa + (int)consumo/100;
                break;
            case 3:
                total = consumo*tarifa + (int)consumo/100*3;
                break;
        }
        printf("Total da conta de luz: R$ %.2f", total);
    }

    return 0;
}