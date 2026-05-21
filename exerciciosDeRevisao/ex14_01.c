#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int m[5][5];

    srand(time(NULL));
    printf("\nCartela:\n");

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            m[i][j]=rand()%100;
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }

    return 0;
}