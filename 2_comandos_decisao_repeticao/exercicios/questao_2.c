//  Numa fábrica há dois alarmes: um deles dispare a cada x horas e
// o outro a cada y horas. Codifique uma função que, dados os valores
// de x e y, informe qual é o tempo (em horas) mínimo necessário para
// que os dois alarmes disparem simultaneamente.
#include <stdio.h>
#include <math.h>

int main(){
    int x, y, resto, a, b;

    printf("Informe de quantas em quantas horas o alarme X toca: ");
    scanf("%d", &x);
    printf("Informe de quantas em quantas horas o alarme Y toca: ");
    scanf("%d", &y);


    a = x; b = y;
    do {
        resto = a % b;
        a = b;
        b = resto;
    } while (resto != 0);

    printf("Os alarmes irão disparar juntos em %d horas.", (x * y) / a);
    return 0;
}