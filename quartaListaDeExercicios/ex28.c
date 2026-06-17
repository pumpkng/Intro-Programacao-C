#include <stdio.h>

void fibonacci(int);

int main(){
    int fim;

    printf("\nFim: ");
    scanf("%d",&fim);

    printf("\n");
    fibonacci(fim);

    return 0;
}

void fibonacci(int fim){
    int n1 = 0, n2 = 1;

    while(n1<fim){

        if(fim==1){
            printf("011");
            break;
        }
        
        printf("%d",n1);
        n2+=n1;

        printf("%d",n2);
        n1+=n2;
    }
}