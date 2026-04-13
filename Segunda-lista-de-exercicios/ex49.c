#include <stdio.h>
int main(){
    float n1, n2, media;
    char resposta;
    do{
        do{
            printf("Insira a primeira nota: ");
             scanf("%f",&n1);
        }while(n1<0||n1>10);
        do{
        printf("Insira a segunda nota: ");
        scanf("%f",&n2);
        }while(n2<0||n2>10);
        media = (n1+n2)/2;
        printf("A média das notas é igual a %.1f. ",media);
        printf("NOVO CÁLCULO (S/N)?");
        scanf(" %c",&resposta);
    }while(resposta=='S'||resposta=='s');
    return 0;
}