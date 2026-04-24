#include <stdio.h>
int main(){
    int v[30],n,c=0;
    for(int i=0;i<30;i++){
        printf("Insira um número do vetor: ");
        scanf("%d",&v[i]);
    }
    printf("Insira um número: ");
    scanf("%d",&n);
    for(int i=0;i<30;i++){
        if(v[i]==n)
            c++;
    }
    printf("O número aparece no vetor %d vezes.",c);
    return 0;
}