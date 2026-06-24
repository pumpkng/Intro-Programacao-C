#include <stdio.h>
#include <stdlib.h>

int main(){
    int *v, n;

    printf("\nNúmero de elementos do vetor: ");
    scanf("%d",&n);

    v = (int *) malloc(n*sizeof(int));

    if(v==NULL){
        printf("Erro!");
        return 0;
    }

    for(int i=0;i<n;i++){
        printf("\nv[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("\nv: ");

    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }

    free(v);

    return 0;
}