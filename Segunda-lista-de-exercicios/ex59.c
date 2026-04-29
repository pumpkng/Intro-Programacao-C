#include <stdio.h>
int main(){
    float n;
    int c=0;
    for(int i=0;i<10;i++){
        printf("Insira o %do valor: ",i+1);
        scanf("%f",&n);
        if(n<0){
            c++;
        }
    }
    printf("Há %d números negativos.",c);
    return 0;
}