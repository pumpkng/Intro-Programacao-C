#include <stdio.h>
int main(){
    float n;
    do{
        printf("Insira um número: ");
        scanf("%f",&n);
    }while(n<0);    
    do{
        printf("%.0f ",n);
        n--;
    }while(n>=1);
    return 0;
}