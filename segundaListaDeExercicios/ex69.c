#include <stdio.h>
int main(){
    float Vm, Vt=0, mVt, c=0;
    char c;
    do{
        printf("Insira o valor de uma mercadoria: ");
        scanf("%f",&Vm);
        Vt+=Vm;
        printf("\nMAIS MERCADORIAS? (S/N) ");
        scanf(" %c",&c);
        c++;
    }while(c=='S'||c=='s');
    mVt = Vt/c;
    printf("\nO valor total das mercadorias é igual a R$%.2f. O valor médio das mercadorias é igual a R$%.2f.",Vt,mVt);
    return 0;
}