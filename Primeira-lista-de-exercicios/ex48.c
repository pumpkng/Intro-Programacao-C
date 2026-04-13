#include <stdio.h>
int main(){
    float n1, n2, no, media;
    printf("Insira a nota da primeira avaliação: ");
    scanf("%f",&n1);
    printf("Insira a nota da segunda avaliação: ");
    scanf("%f",&n2);
    printf("Insira a nota da avaliação optativa: ");
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
    media = (n1+n2)/2;
    if(media>=6)
    printf("Aprovado");
    else{
        if(media>3)
        printf("Exame");
        else
        printf("Reprovado");
    }
    return 1;
}