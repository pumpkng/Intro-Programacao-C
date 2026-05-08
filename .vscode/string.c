#include <stdio.h>
#include <string.h>
#include <Windows.h>

int main(){
    SetConsoleOutputCP(65001);
    char s[50], s2[50];

    printf("\n\nDigite qualquer coisa: ");
    
    fgets(s,sizeof(s),stdin);
    fflush stdin;
    s[strlen(s)-1] = '\0';

    printf("\n\nDigite qualquer coisa denovo: ");

    fgets(s2,sizeof(s2),stdin);
    fflush stdin;
    s2[strlen(s2)-1] = '\0';

    if(strcmp(s,s2) == 0){
        printf("\n\nSão iguais.\n");
    }
    else{
        printf("\n\nSão diferentes.\n");
    }

    return 0;
}