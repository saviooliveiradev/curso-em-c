/*Faça um programa que receba o ano de 
nascimento de uma pessoa e ano atual, calcule e mostre:
a) a idade dessa pessoa;
b) quantos anos essa pessoa terá em 2030;*/

#include <stdio.h>

int main(){

 int nasc, atual;

 printf("Insira o ano de nascimento:\n");
 scanf("%d", &nasc);
 printf("Insira o ano datual:\n");
 scanf("%d", &atual);

 printf("Idade atual: %d.\n", atual-nasc);
 printf("Idade em 2030: %d.\n", 2030-nasc);
}