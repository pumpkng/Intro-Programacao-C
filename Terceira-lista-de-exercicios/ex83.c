#include <stdio.h>
int main(){
    int v[20];
    for(int i=0;i<20;i++){
        printf("\nInsira um número: ");
        scanf("%d",&v[i]);
    }
    printf("\nOs números do vetor são: ");
    for(int i=19;i>=0;i--){
        printf("%d, ",v[i]);
    }
    return 0;
}