#include <stdio.h>

typedef struct{
    int horas;
    int minutos;
} Horario;

Horario converteMinutos(int);

int main(){
    Horario hm;
    int min;

    printf("\nMinutos: ");
    scanf("%d", &min);

    hm = converteMinutos(min);

    printf("\nNumero de horas: %d", hm.horas);
    printf("\nNumero de minutos: %d", hm.minutos);
}

Horario converteMinutos(int min){
    Horario horasMinutos;

    horasMinutos.horas = min/60;
    horasMinutos.minutos = min%60;

    return horasMinutos;
}
