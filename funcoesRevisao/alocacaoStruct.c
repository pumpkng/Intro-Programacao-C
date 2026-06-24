#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char nome[30];
    int RA;
    float notas[3];
    int frequencia;
} Aluno;

int main(){
    Aluno *p;

    p = (Aluno*) malloc(sizeof(Aluno));

    printf("Nome: ");
    fgets(p->nome,sizeof(p->nome),stdin);

    printf("RA: ");
    scanf("%d",&p->RA);

    for(int i=0;i<3;i++){
        printf("Nota %d: ",i+1);
        scanf("%f",&p->notas[i]);
    }

    printf("Frequencia: ");
    scanf("%d",&p->frequencia);

    free(p);

    return 0;
}