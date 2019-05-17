#include <stdio.h>
#include <math.h>

int main(){
    int x, i, count=0;

    printf("X = ");
    scanf("%d", &x);

    for(i=x+1; count != x ; i++){
        if(i%2==1){
            count++;
            printf("%d ", i);
        }
    }
    return 0;
}