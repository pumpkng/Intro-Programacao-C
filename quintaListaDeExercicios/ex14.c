#include <stdio.h>

void imprimeSerie(int, int, int);

int main(){
    int i, j, k;

    printf("\nInicio: ");
    scanf("%d",&i);

    printf("\nFinal: ");
    scanf("%d",&j);

    printf("\nIncremento: ");
    scanf("%d",&k);

    printf("\n");
    imprimeSerie(i, j, k);

    return 0;
}

void imprimeSerie(int i, int j, int k){

    if(i == j){
        printf("%d ", j+k);
    }
    else{
        printf("%d ",i+k); 
        imprimeSerie(i+1, j, k);
    }
}