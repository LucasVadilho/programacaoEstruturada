#include <stdio.h>

void main(){
    int hi, mi, hf, mf, horas, minutos;
    
    scanf("%d", &hi);
    scanf("%d", &mi);
    scanf("%d", &hf);
    scanf("%d", &mf);

    int duracao = 60 * (hf - hi) + mf - mi;
    if(duracao <= 0){
        duracao += 24 * 60;
    }
    
    horas = duracao / 60;
    minutos = duracao - horas * 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", horas, minutos);
}