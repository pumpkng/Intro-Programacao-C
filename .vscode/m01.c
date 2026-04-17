#include <stdio.h>
int main(){
    int m[3][3],n,cont=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("m[%d][%d] = ",i,j);
            scanf("%d",&m[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    printf("Busca: ");
    scanf("%d",&n);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(m[i][j]==n){
                printf("\nEncontrado na linha %d, coluna %d.",i,j);
                cont++;
                break;
            }
        }
        if(cont!=0)
            break;
    }
    if(cont==0){
        printf("\nNão encontrado.");
    }
}