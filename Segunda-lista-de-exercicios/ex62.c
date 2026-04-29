#include <stdio.h>
int main(){
    float a,n,media;
    int na;
    printf("Insira o número de alunos na sala: ");
    scanf("%f",&na);
    for(int i=0;i<na;i++){
        printf("\nInsira a nota do %do aluno: ",i+1);
        scanf("%f",&n);
        a+=n;
    }
    media=a/na;
    printf("\nA média das notas da sala é igual a %.1f.",media);
    return 0;
}