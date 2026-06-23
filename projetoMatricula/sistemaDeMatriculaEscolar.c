#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct{
    char nome[50];
    int RA;
    float nota[3];
    int frequencia;
} Aluno;

void imprimeMenu();
void insereAluno(Aluno[], int, int);
void imprimeTurma(Aluno[], int);
void imprimeAluno(Aluno[], int);
void removeAluno(Aluno[], int, int);
int buscaAluno(Aluno[], int, int);
float calculaMedia(Aluno[], int);
float calculaMediaTurma(Aluno[], int);

int main(){
    SetConsoleOutputCP(65001);
    Aluno turma[50];
    int n = 0, op, RA, pos;
    
    do{
        imprimeMenu();
        scanf("%d",&op);
        
        switch(op){
            case 1:
                if(n >= 50){
                    printf("\n\nTurma cheia!\n\n");
                }
                else{
                    printf("\n\nRA: ");
                    scanf("%d",&RA);
                    
                    if(buscaAluno(turma, n, RA) == -1){
                        insereAluno(turma, n, RA);
                        n++;
                    }
                    else{
                        printf("\n\nAluno já inserido!\n\n");
                    }
                }
                break;

            case 2: 
                if(n == 0){
                    printf("\n\nTurma vazia!\n\n");
                }
                else{
                    imprimeTurma(turma, n);
                }
                break;

            case 3:
                printf("\n\nRA: ");
                scanf("%d",&RA);
                
                pos = buscaAluno(turma, n, RA);

                if( pos == -1){
                    printf("\nAluno não encontrado!\n\n");
                }
                else{
                    imprimeAluno(turma, pos);
                }
                break;

            case 4:
                if(n == 0){
                    printf("\n\nTurma vazia!\n\n");
                }
                else{
                    printf("\n\nRA: ");
                    scanf("%d",&RA);

                    pos = buscaAluno(turma, n, RA);

                    if(pos == -1){
                        printf("\n\nAluno não existe!\n\n");
                    }
                    else{
                        removeAluno(turma, n, pos);
                        n--;
                    }
                }
                break;

            case 5:
                if(n == 0){
                    printf("\n\nTurma vazia!\n\n");                    
                }
                else{
                    printf("\nRA: ");
                    scanf("%d",&RA);
                    
                    pos = buscaAluno(turma, n, RA);

                    if(pos == -1){
                        printf("\n\nAluno não existe!\n\n");
                    }
                    else{
                        insereAluno(turma, pos, RA);
                    }
                }
                break;

            case 6:
                if(n == 0){
                    printf("\n\nTurma vazia!\n\n");                    
                }
                else{
                    printf("\nRA: ");
                    scanf("%d",&RA);

                    pos = buscaAluno(turma, n, RA);

                    printf("\n\nMédia do aluno %s: %.1f\n\n", turma[pos].nome, calculaMedia(turma, pos));
                }
                break;
            
            case 7: 
                if(n == 0){
                    printf("\n\nTurma vazia!\n\n");                    
                }
                else{
                    printf("\n\nMédia da turma: %.1f\n\n", calculaMediaTurma(turma, n));
                }            
                break;
            
            case 8:
                printf("\n\nTchau!\n\n");
                break;
            
            default:
                printf("\n\nOpção Inválida!\n\n");
                break;
        }
    }while(op != 8);
    
    return 0;
}

void imprimeMenu(){
   printf("\nMenu:");
   printf("\n1 - Inserir aluno");
   printf("\n2 - Consultar turma");
   printf("\n3 - Consultar aluno");
   printf("\n4 - Remover aluno");
   printf("\n5 - Alterar dados do aluno");
   printf("\n6 - Calcular média do aluno");
   printf("\n7 - Calcular média da turma");
   printf("\n8 - Finalizar");
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

    printf("Frequência: ");
    scanf("%d",&turma[n].frequencia);

    turma[n].RA = RA;
}

void imprimeTurma(Aluno turma[], int n){
    
    printf("\n\nDados da turma:\n\n");
    for(int i=0;i<n;i++){
        printf("\nNome: %s", turma[i].nome);
        printf("\nRA: %d", turma[i].RA);
        printf("\nNotas: ");
        for(int j=0;j<3;j++){
            printf("\nNota %d: %.1f", j+1, turma[i].nota[j]);
        }
        printf("\nFrequência: %d", turma[i].frequencia);
        printf("\n\n");
    }
}

void imprimeAluno(Aluno turma[], int pos){
    
        printf("\nNome: %s", turma[pos].nome);
        printf("\nRA: %d", turma[pos].RA);
        printf("\nNotas: ");
        for(int i=0;i<3;i++){
            printf("\nNota %d: %.1f", i+1, turma[pos].nota[i]);
        }
        printf("\nFrequência: %d", turma[pos].frequencia);
        printf("\n\n");
}

void removeAluno(Aluno turma[], int n, int pos){

    turma[pos].RA = 0;

    for(int i=pos;i<n-1;i++){
        turma[i] = turma[i+1];
    }
}

int buscaAluno(Aluno turma[], int n, int RA){

    for(int i=0;i<n;i++){
        if(turma[i].RA == RA){
            return i;
        }
    }

    return -1;
}

float calculaMedia(Aluno turma[], int pos){
    float soma = 0;
    for(int i=0;i<3;i++){
        soma += turma[pos].nota[i];
    }
    soma /= 3;
    return soma;
}

float calculaMediaTurma(Aluno turma[], int n){
    float soma = 0;
    for(int i=0;i<n;i++){
        soma =+ calculaMedia(turma, i);
    }
    soma /= n;
    return soma;
}