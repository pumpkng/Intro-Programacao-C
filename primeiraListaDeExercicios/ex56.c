#include <stdio.h>
int main(){
    float n1,n2,RESULTADO,RESTO;
    int OPERACAO;
    printf("Insira o primeiro número: ");
    scanf("%f",&n1);
    printf("\nInsira o segundo número: ");
    scanf("%f",&n2);
    printf("\nInsira qual operação realizar: 1 para adição, 2 para subtração, 3 para divisão e 4 para multiplicação.");
    scanf("%d",&OPERACAO);
    if(OPERACAO==1)
        RESULTADO = n1+n2;
    if(OPERACAO==2)
        RESULTADO = n1-n2;
    if(OPERACAO==3)
        RESULTADO = n1/n2;
    if(OPERACAO==4)
        RESULTADO = n1*n2;
    printf("\nRESULTADO = %.2f",RESULTADO);
    return 0;
}