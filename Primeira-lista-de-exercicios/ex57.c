#include <stdio.h>
int main(){
    float n1,n2,n3;
    printf("Insira o primeiro valor: ");
    scanf("%f",&n1);
    printf("Insira o segundo valor: ");
    scanf("%f",&n2);
    printf("Insira o terceiro valor: ");
    scanf("%f",&n3);
    if(n1>n2){
        if(n1>n3){
            if(n2>n3)
            printf("%.2f, %.2f, %.2f",n1,n2,n3);
            else
            printf("%.2f, %.2f, %.2f",n1,n3,n2);
        }
        else
        printf("%.2f, %.2f, %.2f",n3,n1,n2);
    }
    else{
        if(n2>n3){
            if(n1>n3)
            printf("%.2f, %.2f, %.2f",n2,n1,n3);
            else
            printf("%.2f, %.2f, %.2f",n2,n3,n1);
        }
        else
        printf("%.2f, %.2f, %.2f",n3,n2,n1);
    }
    return 1;
}