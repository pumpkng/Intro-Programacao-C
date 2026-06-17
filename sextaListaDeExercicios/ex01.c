#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[50];
    int RA;
    float nota[3];
    int frequencia;
} Aluno;

void imprimeMenu();
void insereAluno(Aluno[], int, int);
int buscaAluno(Aluno[], int);

int main(){
    Aluno turmaLP[50];
    int n = 0, op, RA, pos;

    imprimeMenu();
    scanf("%d",&op);

    switch(op){
        do{
            case 1:
                if(n == 50){
                    printf("\n\nTurma cheia!\n\n");
                }
                else{
                    printf("\n\nRA: ");
                    scanf("%d",&RA);
                    
                    if(buscaAluno(turmaLP, RA) == -1){
                        insereAluno(turmaLP, n, RA);
                        n++;
                    }
                    else{
                        printf("\n\nAluno já inserido!\n\n");
                    }
                }
        }while(op != 5);
    }
}

void imprimeMenu(){
   printf("\nMenu:");
   printf("\n1 - Insere Aluno");
   printf("\n2 - Imprime Turma");
   printf("\n3 - Busca Aluno por RA");
   printf("\n4 - Remove Aluno");
   printf("\n5 - Finalizar");
   printf("\nOpção: ");
}

void insereAluno(Aluno turma[], int n, int RA){
    
    printf("\n\nNome: ");
    getchar();
    fgets(turma[n].nome, sizeof(turma[n].nome), stdin);
    turma[n].nome[strlen(turma[n].nome)-1] = '\0';

    for(int i=0;i<3;i++){
        printf("Nota %d: ",i+1);
        scanf("%f",&turma[n].nota[i]);
    }

    printf("Frequencia: ");
    scanf("%d",&turma[n].frequencia);

    turma[n].RA = RA;
}

int buscaAluno(Aluno turma[], int RA){

    for(int i=0;i<50;i++){
        if(turma[i].RA == RA){
            return i;
        }
    }

    return -1;
}