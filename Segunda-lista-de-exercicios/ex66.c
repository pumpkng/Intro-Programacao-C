#include <stdio.h>
int main(){
    int c, c1, c2, n1, n2;
    c2=0;
    printf("Insira o primeiro número: ");
    scanf("%i",&n1);
    printf("Insira o segundo número: ");
    scanf("%i",&n2);
    if(n2<=n1){
        c1=n2;
        for(c=0;c<n1;c++){
            c2+=c1;
            c1++;
        }
    }
    else{
        c1=n1;
        for(c=0;c<n2;c++){
            c2+=c1;
            c1++;
        }
    }    
    printf("A soma dos números entre os dois inteiros é igual a %i.",c2);
    return 0;
}