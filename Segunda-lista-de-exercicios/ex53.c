#include <stdio.h>
int main(){
    float n;
    printf("Insira um número: ");
    scanf("%f",&n);
    do{
        printf("%.0f ",n);
        n--;
    }while(n>=1);
    return 0;
}