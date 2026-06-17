#include <stdio.h>

int menor(int);

int main(){
    int n;

    printf("\nN: ");
    scanf("%d",&n);

    printf("\nMenor quadrado: %d",menor(n));

    return 0;
}

int menor(int n){
    int m = 0;

    for(int i=0;i<=n+1;i++){
        if(m*m>n){
            return m;
        }
        m++;
    }

    return 0;
}