// O Índice de Massa Corporal (IMC) é uma medida internacional usada para
// calcular se uma pessoa está no peso ideal. O cálculo é feito através da divisão da
// massa(kg) pelo quadrado da altura da pessoa(mts). Faça um programa que leia a
// massa e a altura de uma pessoa e imprima sua situação baseada no seu IMC(vide
// tabela). O processo anterior deve ser repetido até que o usuário forneça valores
// para massa e altura iguais a 0.

// IMC                              Situação
// Entre 18,5 e 24,99               Peso normal
// Entre 25 e 29,99                 Acima do peso
// Entre 30 e 34,99                 Obesidade I
// Acima de 35                      Obesidade II

#include <stdio.h>
#include <stdlib.h>

int main(){
    float massa, altura, imc;

    printf("Informe o seu peso(KG): ");
    scanf("%f", &massa);

    printf("Informe a sua altura(MTs): ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);
    if(imc > 18.5 && imc < 24.99){
        printf("PESO NORMAL");
    }else if(imc > 24.99 && imc < 29.99){
        printf("ACIMA DO PESO");
    }else if(imc > 29.99 && imc < 34.99){
        printf("OBESIDADE I");
    }else if(imc > 34.99){
        printf("OBESIDADE II");
    }

    return 0;
}