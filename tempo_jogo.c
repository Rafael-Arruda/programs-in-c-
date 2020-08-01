#include <stdio.h>

int main(void){
    //URI 1047
    int i;
    int hi, mi, hf, mf;
    scanf("%i %i %i %i", &hi, &mi, &hf, &mf);
    int horas = 0;
    if((hi==hf && mi > mf) || (hi==hf && mi==mf)){
        horas = 24;
    }if(mi>mf){
        horas -= 1;
    }
    int minutos = 0;
    for(i=hi;i != hf;i++){
        if(i == 24){
            i = 0;
        }
        horas += 1;
    }
    for(i=mi;i != mf; i++){
        if(i == 60){
            i=0;
        }
        minutos++;
    }
    printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horas, minutos);
}

