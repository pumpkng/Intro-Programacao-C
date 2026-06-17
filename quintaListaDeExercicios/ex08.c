#include <stdio.h>

void numeros(int);

int main(){
    int n;

    printf("\nN: ");
    scanf("%d",&n);

    numeros(n);

    return 0;
}

void numeros(int n){
    
    if(n == 0){
        printf(" %d",0);
    }
    else{
        printf(" %d",n);
        numeros(n-1);
    }

}