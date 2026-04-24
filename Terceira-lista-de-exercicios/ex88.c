#include <stdio.h>
int main(){
    int v[20],n,v2[19],c=0,encontrado=0;
    for(int i=0;i<20;i++){
        printf("Insira um número do vetor: ");
        scanf("%d",&v[i]);
    }
    printf("Insira um número: ");
    scanf("%d",&n);
    for(int i=0;i<20;i++){
        if(v[i]==n){
            encontrado=1;
            break;
        }
    }
    if(encontrado==1){
        for(int i=0;i<20;i++){
            if(v[i]!=n){
                v2[c]=v[i];
                c++;
            }
        }
        printf("Novo vetor: ");
        for(int i=0;i<19;i++){
            printf("%d\t",v2[i]);
        }
    }
    else{
        printf("Número não está no vetor: ");
        for(int i=0;i<20;i++){
            printf("%d\t",v[i]);
        }
    }
    return 0;
}