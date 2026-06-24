#include <stdio.h>
#include <string.h>

int main(){
    char nomes[5][30], nome_busca[30];
    int cont = 0;
    
    for(int i=0;i<5;i++){
        printf("\nDigite o %do nome: ", i+1);
        fgets(nomes[i], sizeof(nomes[i]), stdin);
        nomes[i][strlen(nomes[i])-1] = '\0';
    }

    printf("\nNomes digitados:\n");
    for(int i=0; i<5; i++){
        printf("%s\n", nomes[i]);
    }

    printf("\nDigite o nome a ser buscado: ");
    fgets(nome_busca, sizeof(nome_busca), stdin);
    nome_busca[strlen(nome_busca)-1] = '\0';

    for(int i=0;i<5;i++){
        if(strcmp(nomes[i], nome_busca) == 0){
            printf("\nNome encontrado: %s", nomes[i]);
            cont = 1;
            break;
        }
    }

    if(cont == 0){
        printf("\nNome não encontrado.");
    }

    return 0;
}