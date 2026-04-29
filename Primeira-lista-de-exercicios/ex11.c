#include <stdio.h>
int main(){
    int nv,vv,vb,vn;
    float p1,p2,p3;
    printf("Insira o número de votantes: ");
    scanf("%d",&nv);
    printf("\nInsira o número de votos válidos: ");
    scanf("%d",&vv);
    printf("\nInsira o número de votos brancos: ");
    scanf("%d",&vb);
    printf("\nInsira o número de votos nulos: ");
    scanf("%d",&vn);
    p1=(vv/nv)*100;
    p2=(vb/nv)*100;
    p3=(vn/nv)*100;
    printf("\nA porcentagem de votos válidos é de %.2f%%. A porcentagem de votos brancos é de %.2f%%. A porcentagem de votos nulos é de %.2f%%.",p1,p2,p3);
    return 0;
}