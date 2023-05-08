/*Jeremias possui um cronômetro que consegue marcar o tempo apenas em segundos. 
Sabendo disso, desenvolva um algoritmo que receba o tempo cronometrado, em 
segundos, e diga quantas horas, minutos e segundos se passaram a partir do tempo 
cronometrado.*/

#include <stdio.h>

int main(){

    float segundos, horas, minutos;

    printf("Insira tempo em segundos:\n");
    scanf("%f", &segundos);

    horas = segundos / 3600;
    segundos = segundos - (3600*horas);
    
    minutos = segundos / 60;
    segundos = segundos - (60*minutos);

    printf("Horas: %.2f.\n", horas);
    printf("Minutos: %.2f.\n", minutos);
    printf("Segundos: %.2f.\n", segundos);
}