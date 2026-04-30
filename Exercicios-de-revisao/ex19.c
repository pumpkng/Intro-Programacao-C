#include <stdio.h>

int main(){
    float m[5][4],maior=0,soma=0,media;
    int matricula;

    for(int i=0;i<5;i++){
        for(int j=0;j<3;j++){
            printf("\nInsira o número de matrícula, a média das provas e a média dos trabalhos do %do aluno: ",i+1);
            scanf("%f",&m[i][j]);
        }
    }

    for(int i=0;i<5;i++){
        m[i][3]=m[i][1]+m[i][2];
        if(m[i][3]>maior){
            maior=m[i][3];
            matricula=i;
        }
        soma+=m[i][3];
    }

    media=soma/5;
    printf("\n\nMatrícula do aluno com maior nota final (%.1f): %d. A média das notas finais é igual a %.1f.",maior,matricula,media);
    return 0;
}