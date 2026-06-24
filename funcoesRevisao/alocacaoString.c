#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char texto[] = "mensagem";
    char *t;

    t = (char *) malloc((strlen(texto)+1)*sizeof(char));

    strcpy(t, texto);

    printf("\n%s",t);
    printf("\n%p",t);
    printf("\n%s",texto);
    printf("\n%p",texto);

    free(t);

    return 0;
}