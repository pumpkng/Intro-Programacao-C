#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int primo(int);

int main(){
    SetConsoleOutputCP(65001);
    int n;

    printf("\nNúmero: ");
    scanf("%d",&n);

    if(primo(n))
        printf("\nÉ primo!");
    else
        printf("\nNão é primo!");
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