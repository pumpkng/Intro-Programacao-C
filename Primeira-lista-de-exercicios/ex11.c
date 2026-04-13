#include <stdio.h>
int main(){
    float nv, vv, vb, vn, p1, p2, p3;
    printf("Insira o número de votantes: ");
    scanf("%f",&nv);
    printf("Insira o número de votos válidos: ");
    scanf("%f",&vv);
    printf("Insira o número de votos brancos: ");
    scanf("%f",&vb);
    printf("Insira o número de votos nulos: ");
    scanf("%f",&vn);
    p1 = (vv/nv)*100;
    p2 = (vb/nv)*100;
    p3 = (vn/nv)*100;
    printf("A porcentagem de votos válidos é de %.2f%%. A porcentagem de votos brancos é de %.2f%%. A porcentagem de votos nulos é de %.2f%%.",p1,p2,p3);
    return 1;
}