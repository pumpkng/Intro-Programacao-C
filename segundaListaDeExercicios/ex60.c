#include <stdio.h>
int main(){
    int c=0,c2=0,n;
    for(int i=0;i<10;i++){
        printf("Insira o %do valor: ",i+1);
        scanf("%d",&n);
        if(10<=n&&n<=20)
            c++;
        else
            c2++;
    }
    printf("\nHá %d números no intervalo [10,20], e %d números fora.",c,c2);
    return 0;
}