#include <stdio.h>

void soma_prod(int a, int b, int *soma, int *produto){

}

int main(){
    int a=5, b=11, result_soma, result_prod;

    soma_prod(a, b, &result_soma, &result_prod);
    printf("A + B = %d\n", result_soma);
    printf("A * B = %d\n", result_prod);

    return 0;
}