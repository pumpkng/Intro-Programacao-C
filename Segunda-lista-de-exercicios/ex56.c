#include <stdio.h>
int main(){
    int n1, n2;
    printf("Insira um número: ");
    scanf("%d",&n1);
    n2=n1;
    do{
        printf("%d ",n2);
        n2+=n1;
    }while(n2<=(10*n1));
    return 0;
}