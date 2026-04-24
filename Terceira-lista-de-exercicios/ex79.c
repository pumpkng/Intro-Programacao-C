#include <stdio.h>
int main(){
    int V[20],a=0,media,c=0;
    for(int i=0;i<20;i++){
        printf("Insira a nota do aluno %d: ",i+1);
        scanf("%d",&V[i]);
        a+=V[i];
    }
    media=a/20;
    for(int i=0;i<20;i++){
        if(V[i]>media){
            c++;
        }
    }
    printf("\nMédia da turma: %d.\nNúmero de notas acima da média: %d.",media,c);
    return 0;
}