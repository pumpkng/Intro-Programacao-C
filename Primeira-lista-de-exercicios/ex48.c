#include <stdio.h>
int main(){
    float n1, n2, no, media;
    printf("Insira a nota da primeira avaliação: ");
    scanf("%f",&n1);
    printf("\nInsira a nota da segunda avaliação: ");
    scanf("%f",&n2);
    printf("\nInsira a nota da avaliação optativa: ");
    scanf("%f",&no);
    if(no==0)
    no = -1;
    if(no>n1){
        if(n1<=n2)
        n1=no;
        else
        n2=no;
    }
    else{
        if(no>n2)
        n2=no;
    }
    media=(n1+n2)/2;
    if(media>=6)
        printf("\nAprovado");
    else{
        if(media>3)
            printf("\nExame");
        else
            printf("\nReprovado");
    }
    return 0;
}