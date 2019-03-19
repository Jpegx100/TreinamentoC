// Uma pessoa deseja investir seu dinheiro em um fundo de renda fixa,
// cujo rendimento é de j% ao mês. Faça um programa para calcular,
// utilizando juros compostos, o valor resgatado ao final do
// investimento, de acordo com o montante inicial e a quantidade de
// meses informados pelo usuário.
#include <stdio.h>
#include <math.h>

int main(){
    float capital, juros, total;
    int meses;

    printf("Informe o capital inicial: R$ ");
    scanf("%f", &capital);
    printf("Informe a taxa de juros: ");
    scanf("%f", &juros);
    printf("Informe a quantidade de meses: ");
    scanf("%d", &meses);

    juros = juros / 100.0;
    total = capital * pow((1 + juros), meses);
    printf("TOTAL: R$ %.2f", total);

    return 0;
}