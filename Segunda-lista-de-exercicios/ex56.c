#include <stdio.h>
int main(){
    float n1, n2;
    printf("Insira um número: ");
    scanf("%f",&n1);
    n2 = n1;
    do{
        printf("%.0f ",n2);
        n2+=n1;
    }while(n2<=(10*n1));
    return 0;
}