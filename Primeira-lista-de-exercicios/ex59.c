#include <stdio.h>
int main(){
    float a1,a2,a3;
    printf("Insira o primeiro ângulo em graus: ");
    scanf("%f",&a1);
    printf("Insira o segundo ângulo em graus: ");
    scanf("%f",&a2);
    printf("Insira o terceiro ângulo em graus: ");
    scanf("%f",&a3);
    if(a1==90||a2==90||a3==90)
    printf("Triângulo Retângulo");
    else{
        if(a1>90||a2>90||a3>90)
        printf("Triângulo Obtusângulo");
        else
        printf("Triângulo Acutângulo");
    }
    return 1;
}