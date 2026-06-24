#include <stdio.h>
#include <stdlib.h>

int ordenaVar(int*, int*, int*);

int main(){
    int v1, v2, v3;

    printf("V1: ");
    scanf("%d", &v1);
    printf("V2: ");
    scanf("%d", &v2);
    printf("V3: ");
    scanf("%d", &v3);

    if(ordenaVar(&v1, &v2, &v3))
        printf("\nValores iguais.");
    else
        printf("\nValores diferentes");
    printf("\nV1: %d", v1);
    printf("\nV2: %d", v2);
    printf("\nV3: %d", v3);

    return 0;
}

int ordenaVar(int *v1, int *v2, int *v3){
    int aux;
    
    if(*v1 == *v2 && *v1 == *v3){
        return 1;
    }
    
    if(*v1 < *v2 && *v1 < *v3){
        if(*v2 < *v3){
            return 0;
        }
        else{
            aux = *v3;
            *v3 = *v2;
            *v2 = aux;

            return 0;
        }
    }

    if(*v2 < *v1 && *v2 < *v3){
        aux = *v2;
        *v2 = *v1;
        *v1 = aux;

        if(*v2 < *v3){
            return 0;
        }
        else{
            aux = *v2;
            *v2 = *v3;
            *v3 = aux;
            return 0;
        }
    }

    if(*v3 < *v1 && *v3 < *v2){
        aux = *v3;
        *v3 = *v1;
        *v1 = aux;

        if(*v3 < *v2){
            return 0;
        }
        else{
            aux = *v2;
            *v2 = *v3;
            *v3 = aux;

            return 0;
        }
    }

    return 0;
}