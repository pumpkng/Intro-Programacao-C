#include <stdio.h>
#include <string.h>

typedef struct{
    char nome[30];
    int RA;
    float notas[3];
    int frequencia;
} Aluno;

void imprimeMenu();
int buscaAluno(Aluno[],int,int);
void imprimeDadosAluno(Aluno[],int);
void alteraDadosAluno(Aluno[],int);
void insereAluno(Aluno[],int,int);
void imprimeTurma(Aluno[],int);
void removeAluno(Aluno[],int,int);
float calculaMediaAluno(Aluno[],int);

int main(){
    Aluno turmaLP[50];
    int n=0;
    int op, RA, pos;

    do{
        imprimeMenu();
        scanf("%d",&op);
        switch(op){
            case 1:
                if(n==50){
                    printf("\nTurma cheia.\n");
                }
                else{
                    printf("RA: ");
                    scanf("%d",&RA);
                    pos = buscaAluno(turmaLP,n,RA);
                    if(pos==-1){
                        insereAluno(turmaLP,n,RA);
                        n++;
                    }
                    else{
                        printf("\nRA já existe.\n");
                    }
                }
                break;
            case 2:
                printf("RA: ");
                scanf("%d",&RA);
                pos = buscaAluno(turmaLP,n,RA);
                if(pos==-1)
                    printf("\nAluno não encontrado.\n");
                else{
                    imprimeDadosAluno(turmaLP,pos);
                }
                break;
            case 3:
                printf("RA: ");
                scanf("%d",&RA);
                pos = buscaAluno(turmaLP,n,RA);
                if(pos==-1)
                    printf("\nAluno não encontrado.\n");
                else{
                    alteraDadosAluno(turmaLP,pos);
                }
                break;
            case 4:
                printf("RA: ");
                scanf("%d",&RA);
                pos = buscaAluno(turmaLP,n,RA);
                if(pos==-1)
                    printf("\nAluno não encontrado.\n");
                else{
                    removeAluno(turmaLP,n,pos);
                    n--;
                }
                break;
            case 5:
                if(n==0){
                    printf("\nTurma vazia.\n");
                }
                else{
                    imprimeTurma(turmaLP,n);
                }
                break;
            case 6:
                printf("RA: ");
                scanf("%d",&RA);
                pos = buscaAluno(turmaLP,n,RA);
                if(pos==-1)
                    printf("\nAluno não encontrado.\n");
                else{
                    imprimeDadosAluno(turmaLP,pos);
                    printf("\nMédia Aluno: %.1f\n",calculaMediaAluno(turmaLP,pos));
                }
                break;
            case 7:
                printf("\nTchau!\n");
                break;
            default:
                printf("\nOpção incorreta!\n");
                break;
        }
    }while(op!=7);
}

void imprimeMenu(){
    printf("\nMenu:");
    printf("\n1 - Matricular Aluno");
    printf("\n2 - Consultar Aluno");
    printf("\n3 - Alterar Dados Aluno");
    printf("\n4 - Remover Aluno");
    printf("\n5 - Imprime Turma");
    printf("\n6 - Calcula Média do Aluno");
    printf("\n7 - Sair");
    printf("\nOpção: ");
}

int buscaAluno(Aluno turma[],int n,int RA){
    for(int i=0;i<n;i++){
        if(RA==turma[i].RA)
            return i;
    }
    return -1;
}

void imprimeDadosAluno(Aluno turma[],int pos){
    printf("\n\nDados do aluno:");
    printf("\nNome:  %s",turma[pos].nome);
    printf("\nRA: %d",turma[pos].RA);
    for(int i=0;i<3;i++)
        printf("\nNota %d: %.2f",i+1,turma[pos].notas[i]);
    printf("\nFrequencia: %d\n",turma[pos].frequencia);
}

void alteraDadosAluno(Aluno turma[],int pos){
    printf("\nNovos dados do aluno:");
    printf("\nNome: ");
    getchar();
    fgets(turma[pos].nome,sizeof(turma[pos].nome),stdin);
    turma[pos].nome[strlen(turma[pos].nome)-1] = '\0';
    for(int i=0;i<3;i++){
        printf("Nota %d: ",i+1);
        scanf("%f",&turma[pos].notas[i]);
    }
    printf("Frequencia: ");
    scanf("%d",&turma[pos].frequencia);
}

void insereAluno(Aluno turma[],int n,int RA){
    turma[n].RA = RA;
    alteraDadosAluno(turma,n);
}

void imprimeTurma(Aluno turma[],int n){
    printf("\nTurma:\n");
    for(int i=0;i<n;i++){
        imprimeDadosAluno(turma,i);
    }
}

void removeAluno(Aluno turma[],int n,int pos){
    for(int i=pos;i<n-1;i++){
        turma[i] = turma[i+1];
    }
}

float calculaMediaAluno(Aluno turma[],int pos){
    float soma=0;
    for(int i=0;i<3;i++){
        soma += turma[pos].notas[i];
    }
    return soma/3;
}

int encontraMaiorP1(Aluno turma[],int n){
    float maior = turma[0].notas[0];
    int pos = 0;
    for(int i=0;i<n;i++){
        if(turma[i].notas[0]>maior){
            maior = turma[i].notas[0];
            pos = i;
        }
    }
    return pos;
}

int maiorMediaTurma(Aluno turma[],int n){
    float maior = calculaMediaAluno(turma,0);
    int pos = 0;
    for(int i=0;i<n;i++){
        if(calculaMediaAluno(turma,i)>maior){
            maior = calculaMediaAluno(turma,i);
            pos = i;
        }
    }
    return pos;
}

float calculaMediaTurma(Aluno turma[],int n){
    float soma = 0;
    for(int i=0;i<n;i++){
        soma += calculaMediaAluno(turma,i);
    }
    return soma/n;
}