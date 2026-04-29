#include <stdio.h>
int main(){
    int v[20];

    for(int i=0;i<20;i++){
        printf("Insira um número: ");
        scanf("%d",&v[i]);
    }

    printf("\nOs números do vetor são: \n");

    for(int i=19;i>=0;i--){
        printf("%d\t",v[i]);
    }
    
    return 0;
}