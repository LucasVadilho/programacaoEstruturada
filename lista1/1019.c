#include <stdio.h>

void main(){
    int segundos;

    scanf("%d", &segundos);

    int horas = segundos / 3600;
    segundos -= horas * 3600;
    int minutos = segundos / 60;
    segundos -= minutos * 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
}