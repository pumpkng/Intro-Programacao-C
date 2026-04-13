#include <stdio.h>
int main(){
    float c,c1,n1,n2,media;
    printf("Insira o número de alunos na sala: ");
    scanf("%f",&n1);
    for(c=0;c<n1;c++){
        printf("Insira a nota de um aluno: ");
        scanf("%f",&n2);
        c1+=n2;
    }
    media = c1/n1;
    printf("A média das notas da sala é igual a %.1f.",media);
    return 0;
}