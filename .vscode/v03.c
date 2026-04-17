#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    int lancamentos[6]={0,0,0,0,0,0};
    printf("Número de lançamentos: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        lancamentos[rand()%6]++;
    }
    for(int i=0;i<6;i++){
        printf("\nFace %d: %d vezes",i+1,lancamentos[i]);
        printf("\n%.1f%%",(float)lancamentos[i]/n*100);
    }
    return 0;
}