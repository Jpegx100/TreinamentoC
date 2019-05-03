#include <stdio.h>
#include <string.h>

int main(){
    char str[99];
    int tam_str, i;

    printf("Entre com a string: ");
    fgets(str, 99, stdin);

    tam_str = strlen(str);
    for(i=0; i<tam_str ; i++){
        if(str[i]=='a' || str[i]=='A'){
            str[i] = str[i+1];
        }
    }

    printf("%s\n", str);

    return 0;
}