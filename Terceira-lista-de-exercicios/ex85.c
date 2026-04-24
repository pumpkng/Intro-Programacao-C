#include <stdio.h>
#define D 365
int main(){
    float v[D],maior,menor,Soma=0,media,c=0;
    for(int i=0;i<D;i++){
        printf("\nInsira a temperatura média de um dia: ");
        scanf("%f",&v[i]);
        if(i==0){
            maior=v[i];
            menor=v[i];
        }
        if(v[i]>maior)
            maior=v[i];
        if(v[i]<menor)
            menor=v[i];
        Soma+=v[i];
    }
    media=Soma/D;
    for(int i=0;i<D;i++){
        if(v[i]<media)
            c++;
    }
    printf("\nA menor temperatura do ano foi de %.2f graus, e a maior foi de %.2f graus. A temperatura média anual foi de %.2f graus, e o número de dias com temperatura abaixo da média foram %.0f.",menor,maior,media,c);
    return 0;
}