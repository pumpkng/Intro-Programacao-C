#include <stdio.h>

int primos(int, int);
int primo(int);

int main(){
    int x, y;

    do{
        printf("\nX: ");
        scanf("%d",&x);

        printf("\nY: ");
        scanf("%d",&y);
    }while(x>=y);

    printf("\nPrimos entre x e y: %d",primos(x,y));

    return 0;

}

int primos(int x, int y){
    int nprimos = 0;
    for(int i=x;i<=y;i++){
        if(primo(i)){
            nprimos += 1;
        }
    }
    return nprimos;
}

int primo(int n){
    if(n==1)
        return 0;
    for(int i=2;i<n;i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}