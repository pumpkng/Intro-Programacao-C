#include <stdio.h>
#include <math.h>

void binario(int);

int main(){
    int n;

    printf("\nN(10): ");
    scanf("%d",&n);

    printf("\nN(2): ");
    binario(n);

    return 0;
}

void binario(int n){

    if(n == 1){
        printf("1");
    }
    else if(n == 0){
        printf("0");
    }
    else{
        binario(n / 2);
        printf("%d", n % 2);
    }
}