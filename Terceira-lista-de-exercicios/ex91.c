#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define M 20

int main(){
    int v[M], repetidos[M], cont=0, repetido=0;

    srand(time(NULL));
    printf("V: ");
    for(int i=0;i<M;i++){
        v[i] = rand()%10;
        printf("%d, ",v[i]);
    }

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(v[i]==v[j] && i!=j){
                if(j<i)
                    break;
                repetido = 1;
            }
        }
        if(repetido==1){
            repetidos[cont]=v[i];
            cont++;
        }
        repetido = 0;
    }

    printf("\nRepetidos: ");
    for(int i=0;i<cont;i++){
        printf("%d, ",repetidos[i]);
    }

    for(int i=0;i<cont;i++){
        printf("\nValor %d: ",repetidos[i]);
        for(int j=0;j<M;j++){
            if(repetidos[i]==v[j]){
                printf("%d, ",j);
            }
        }
    }
}