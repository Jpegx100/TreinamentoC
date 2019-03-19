// Implemente um programa para calcular o salário líquido de um funcionário
// de uma empresa dado seu salário bruto (SB). Para chegar nesse valor,
// deve-se calcular o valor do INSS a ser descontado, juntamente com o
// imposto de renda (IR). O cálculo do INSS é baseado em um percentual
// fixo, de 11%, sobre o salário bruto, sendo limitado a R$318,37. Para
// o cálculo do IR, devemos utilizar a fórmula IR = (SB - INSS)*A - D.
// tabela que determina a alíquota (A) e a dedução (D) a ser utilizada é
// exibida abaixo:
// Base de cálculo em R$       Alíquota %      Parcela a deduzir do imposto em R$
// Até R$ 1.372,81               Isento                         -
// Até R$ 2.625,12                 15%                     R$ 205,92
// Acima de R$ 2.625,13           27,5%                    R$ 548,82

// A base do cálculo levada em consideração para a determinação da alíquota
// é o SB descontado do INSS. O salário líquido é calculado descontando
// o IR e o INSS do salário base.

#include <stdio.h>
#include <stdlib.h>

int main(){
    float salario_bruto, salario_liquido, inss, ir, deducao, aliquota, base_calc;

    printf("Informe o salário bruto: ");
    scanf("%f", &salario_bruto);

    inss = salario_bruto * 0.11;
    if(inss > 318.37){
        inss = 318.37;
    }
    base_calc = salario_bruto - inss;

    if(base_calc <= 1372.81){
        aliquota = 0;
        deducao = 0;
    }else if(base_calc <= 2626.12){
        aliquota = 0.15;
        deducao = 205.92;
    }else{
        aliquota = 0.275;
        deducao = 548.82;
    }

    ir = base_calc*aliquota - deducao;
    salario_liquido = salario_bruto - inss - ir;

    printf("SALÁRIO LIQUIDO: %.2f", salario_liquido);
    return 0;
}