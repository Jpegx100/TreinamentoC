#include <stdio.h>
#include <stdlib.h>

struct st{
    int a;
    int b;
    float c;
};

int main(){
    printf("INT = %d\n", sizeof(int));
    printf("FLOAT = %d\n", sizeof(float));
    printf("DOUBLE = %d\n", sizeof(double));
    printf("STRUCT = %d\n", sizeof(struct st));
    return 0;
}