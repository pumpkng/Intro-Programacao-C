#include <stdio.h>
#include <stdio.h>
#include <windows.h>

int triangulo(int, int, int);

int main(){
    SetConsoleOutputCP(65001);
    int n1, n2, n3;

    do{
        printf("\nN1: ");
        scanf("%d",&n1);

        printf("\nN2: ");
        scanf("%d",&n2);

        printf("\nN3: ");
        scanf("%d",&n3);
    }while(n1 <= 0 || n2 <= 0 || n3 <= 0);
    
    switch (triangulo(n1, n2, n3)){

        case 0:
            
            printf("\nNão é triângulo!");
            break;
        
        case 1:

            printf("\nTriângulo equilátero!");
            break;
        
        case 2:

            printf("\nTriângulo isóceles!");
            break;

        case 3:

            printf("\nTriângulo escaleno!");
            break;

        default:

            printf("\nErro!");
            break;
    }

    return 0;
}

int triangulo(int n1, int n2, int n3){

    if(n1 > n2 + n3 || n2 > n1 + n3 || n3 > n2 + n1)
        return 0;
    
    else if(n1 == n2 && n1 == n3)
        return 1;

    else if(n1 == n2 || n1 == n3 || n2 == n3)
        return 2;

    else
        return 3;
}