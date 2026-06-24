#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    
    printf("\nEndereço de a: %p", &a);
    printf("\nEndereço de b: %p", &b);

    if(&a > &b)
        printf("\nMaior endereço: %p", &a);
    else
        printf("\nMaior endereço: %p", &b);

    return 0;
}