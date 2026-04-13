#include <stdio.h>
int main(){
    float c1, c2, c3, n;
    c2=0;
    c3=0;
    for(c1=0;c1<10;c1++){
        printf("Insira um valor: ");
        scanf("%f",&n);
        if(10<=n&&n<=20)
        c2++;
        if(n<=10||n>=20)
        c3++;
    }
    printf("Há %.0f números no intervalo [10,20], e %.0f números fora.",c2,c3);
    return 0;
}