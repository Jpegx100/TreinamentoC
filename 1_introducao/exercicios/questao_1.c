// Implemente um programa que gere o preço de um carro ao consumidor,
// sabendo o custo de produção do carro e que são pagos:
// a. de imposto: 45% sobre o custo de venda do carro;
// b. de lucro do distribuidor: 12% sobre o custo de produção do carro.
#include <stdio.h>

int main(){
    float custo_producao, lucro_distribuidor, imposto, preco;

    printf("Informe o custo de produção do veículo: R$ ");
    scanf("%f", &custo_producao);

    lucro_distribuidor = custo_producao * 0.12;
    imposto = ((custo_producao + lucro_distribuidor) * 0.45)/0.55;
    preco = custo_producao + lucro_distribuidor + imposto;
    printf("PREÇO DO CARRO: R$ %.2f", preco);
    return 0;
}