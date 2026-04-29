#include <stdio.h>
int main(){
   float sm, pr, sn;
   printf("Insira o salário mensal: ");
   scanf("%f",&sm);
   printf("\nInsira o reajuste em %%: ");
   scanf("%f",&pr);
   sn=(sm*pr/100)+sm;
   printf("\nO novo salário é igual a R$%.2f.",sn);
   return 0; 
}