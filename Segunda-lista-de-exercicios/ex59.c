#include <stdio.h>
int main(){
    float c1, c2, n;
    c2=0;
    for(c1=0;c1<10;c1++){
        printf("Insira um valor: ");
        scanf("%f",&n);
        if(n<0){
            c2++;
        }
    }
    printf("Há %.0f números negativos.",c2);
    return 0;
}