#include <stdio.h>

int somaSerie(int, int, int);

int main(){
    int i, j, k;

    printf("\nInicio: ");
    scanf("%d",&i);

    printf("\nFinal: ");
    scanf("%d",&j);

    printf("\nIncremento: ");
    scanf("%d",&k);

    printf("\nSoma da serie: %d", somaSerie(i, j, k));

    return 0;
}

int somaSerie(int i, int j, int k){

    if(i == j){
        return j + k;
    }

    return i + k + somaSerie(i+1, j, k);
}