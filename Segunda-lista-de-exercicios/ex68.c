#include <stdio.h>
int main(){
    float m, Vm, Vt, mVm;
    printf("Insira o número de mercadorias: ");
    scanf("%f", &m);
    printf("Insira o valor de cada mercadoria: ");
    scanf("%f", &Vm);
    Vt = m * Vm;
    mVm = Vt / m;
    printf("O valor total das mercadorias é igual a %.2f e a média do valor das mercadorias é igual a %.2f.", Vt, mVm);
    return 0;
}