#include <stdio.h>
#define M 10

int main(){
    int m[M][M];

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            if(i<j){
                m[i][j]=(2*i)+(7*j)-2;
            }
            if(i>j){
                m[i][j]=(4*i*i*i)-(5*j*j)+1;
            }
            if(i==j){
                m[i][j]=(3*i*i)-1;
            }
        }
    }

    printf("\nm: \n");

    for(int i=0;i<M;i++){
        for(int j=0;j<M;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    return 0;
}