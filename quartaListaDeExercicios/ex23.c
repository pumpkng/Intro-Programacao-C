#include <stdio.h>

void divisao(int,int);

int main(){

    int x, y;

    do{
        printf("\nX: ");
        scanf("%d",&x);

        printf("\nY: ");
        scanf("%d",&y);
    }while(x >= y);

    printf("\n");
    divisao(x, y);

    return 0;
}

void divisao(int x, int y){

    for(int i=x;i<=y;i++){
        
        if(i%13 == 5){
            printf("%d\t",i);
        }
    }
}