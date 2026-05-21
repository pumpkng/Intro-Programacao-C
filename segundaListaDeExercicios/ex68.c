#include <stdio.h>
int main(){
    float Vm, Vt, mVm;
    int m;
    printf("Insira o número de mercadorias: ");
    scanf("%d",&m);
    printf("\nInsira o valor de cada mercadoria em reais: ");
    scanf("%f",&Vm);
    Vt=m*Vm;
    mVm=Vt/m;
    printf("\nO valor total das mercadorias é igual a R$%.2f e a média do valor das mercadorias é igual a R$%.2f.",Vt,mVm);
    return 0;
}