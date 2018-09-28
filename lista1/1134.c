#include <stdio.h>

void main(){
    int preferencia, alcool = 0, gasolina = 0, diesel = 0;

    do{
        scanf("%d", &preferencia);

        if(preferencia == 1) alcool++;
        if(preferencia == 2) gasolina++;
        if(preferencia == 3) diesel++;
    }while(preferencia != 4);
    
    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
}