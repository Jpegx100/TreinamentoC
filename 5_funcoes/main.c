#include <stdio.h>

int fatorial(int n){
    int i;
    int f=1;
    for(i=1; i<=n ; i++){
        f = f*i;
    }
    return f;
}

int main(){
    fatorial(6);
    return 0;
}