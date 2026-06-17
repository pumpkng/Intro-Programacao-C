#include <stdio.h>

int mult(int, int);

int main(){
    int n1, n2;

    printf("\nn1: ");
    scanf("%d",&n1);
    
    printf("\nn2: ");
    scanf("%d",&n2);

    printf("\nMultiplicacao: %d",mult(n1,n2));

    return 0;
}

int mult(int n1, int n2){
    if(n1 == 0){
        return 0;
    }
    if(n1 == 1){
        return n2;
    }

    return mult(n1-1,n2) + n2;
}