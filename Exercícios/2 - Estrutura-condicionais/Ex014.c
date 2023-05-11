/*Faça um programa que receba a hora de 
início de um jogo e a hora final do jogo (cada hora é composta por duas variáveis inteiras: 
hora e minuto). Calcule e mostre a duração do jogo (horas e minutos) sabendo-se que o 
tempo máximo de duração do jogo é de 24 horas e que o jogo pode iniciar em um dia e 
terminar no dia seguinte. Observação: utilizar o formato de hora que vai das 00hr00min 
até as 23hr29min.
*/

#include <stdio.h>

int main(){

    int hr_ini, min_ini, hr_fim, min_fim, hora, minuto;

    printf("insira os dados do inicio:\n");
    printf("Horas: ");
    scanf("%d", &hr_ini);
    printf("Minutos: ");
    scanf("%d", &min_ini);
    printf("Insira os dados do fim:\n");
    printf("Horas: ");
    scanf("%d", &hr_fim);
    printf("Minutos: ");
    scanf("%d", &min_fim);

    if(min_ini > min_fim){
        min_fim = min_fim + 60;
        hr_fim = hr_fim - 1;
    }
    if(hr_ini > hr_fim){
        hr_fim = hr_fim + 24;
    }
    minuto = min_fim - min_ini;
    hora = hr_fim - hr_ini;
    printf("Duração %dhr e %dmin.\n", hora, minuto);
}
