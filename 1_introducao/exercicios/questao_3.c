// Implemente um programa para calcular a idade de uma pessoa, de acordo
// com a data de nascimento e a data de hoje fornecida pelo usuário.
#include <stdio.h>

int main(){
    int ano_nasc, mes_nasc, dia_nasc, ano_atual, mes_atual, dia_atual, idade;

    printf("Informe sua data de nascimento[dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &dia_nasc, &mes_nasc, &ano_nasc);

    printf("Informe sua a data atual[dd/mm/aaaa]: ");
    scanf("%d/%d/%d", &dia_atual, &mes_atual, &ano_atual);

    if(
        (mes_nasc > mes_atual) ||
        ((mes_nasc == mes_atual) && (dia_nasc > dia_atual))
    ){
        idade = ano_atual - ano_nasc - 1;
    }else{
        idade = ano_atual - ano_nasc;
    }

    printf("Você tem %d anos.", idade);
    return 0;
}