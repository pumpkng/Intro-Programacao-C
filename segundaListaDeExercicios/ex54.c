#include <stdio.h>
int main(){
    int n;
    do{
        printf("Insira um número: ");
        scanf("%d",&n);
    }while(n<0);    
    do{
        printf("d ",n);
        n--;
    }while(n>=1);
    return 0;
}