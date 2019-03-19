// Escreva um programa que, dados o saldo atual, execute diversas transações
// bancárias (1 - deposito; 2 - saque; 3 - pagamento;) com o valor a ser creditado/
// debitado. Quando o usuário solicitar para sair (opção 4), informe após a execução
// das transações. Obs.: Utilizar comando switch case, incluindo a cláusula de opção
// inválida e verifique os valores fornecidos; e lembrem-se que o saldo de uma conta
// não pode ficar negativo.
#include <stdio.h>

int main(){
    float saldo=0, valor;
    int opcao=0;

    while(opcao!=4){
        printf("\nO que deseja fazer? ");
        printf("[1 - deposito; 2 - saque; 3 - pagamento; 4 - sair] ");
        scanf("%d", &opcao);

        switch(opcao){
            case 1:
                printf("Qual valor a ser depositado?  R$ ");
                scanf("%f", &valor);
                saldo = saldo + valor;
                break;
            case 2:
                printf("Qual valor a ser sacado?  R$ ");
                scanf("%f", &valor);
                if(valor > saldo){
                    printf("Não é possível sacar R$ %.2f pois o saldo é R$ %.2f", valor, saldo);
                }else{
                    saldo = saldo - valor;
                }
                break;
            case 3:
                printf("Qual valor a ser pago?  R$ ");
                scanf("%f", &valor);
                if(valor > saldo){
                    printf("Não é possível pagar R$ %.2f pois o saldo é R$ %.2f", valor, saldo);
                }else{
                    saldo = saldo - valor;
                }
                break;
            case 4:
                printf("SALDO: R$ %.2f\nEncerrrando programa", saldo);
                break;
            default:
                printf("OPÇÃO '%d' INVÁLIDA", opcao);
        }
    }

    return 0;
}