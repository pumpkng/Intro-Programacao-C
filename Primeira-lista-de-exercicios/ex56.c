#include <stdio.h>
int main(){
    float n1, n2,OPERACAO,RESULTADO,RESTO;
    printf("Insira o primeiro número: ");
    scanf("%f",&n1);
    printf("Insira o segundo número: ");
    scanf("%f",&n2);
    printf("Insira qual operação realizar: 1 para adição, 2 para subtração, 3 para divisão e 4 para multiplicação.");
    scanf("%f",&OPERACAO);
    if(OPERACAO==1)
    RESULTADO = n1+n2;
    if(OPERACAO==2)
    RESULTADO = n1-n2;
    if(OPERACAO==3)
    RESULTADO = n1/n2;
    if(OPERACAO==4)
    RESULTADO = n1*n2;
    printf("RESULTADO = %.2f",RESULTADO);
    return 1;
}