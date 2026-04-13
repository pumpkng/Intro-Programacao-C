#include <stdio.h>
int main(){
    float L, A;
    printf("Insira quanto mede o lado do quadrado: ");
    scanf("%f",&L);
    A = (L*L)*2;
    printf("O dobro da área mede %.2fcm².", A);
    return 1;
}