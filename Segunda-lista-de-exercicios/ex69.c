#include <stdio.h>
int main(){
    float Vm, Vt, mVt, c1;
    char c;
    c1=0;
    Vt=0;
    do{
        printf("Insira o valor de uma mercadoria: ");
        scanf("%f", &Vm);
        Vt+=Vm;
        printf("MAIS MERCADORIAS? (S/N) ");
        scanf(" %c", &c);
        c1++;
    }while(c == 'S' || c == 's');
    mVt = Vt/c1;
    printf("O valor total das mercadorias é igual a R$%.2f. O valor médio das mercadorias é igual a R$%.2f.",Vt,mVt);
    return 0;
}