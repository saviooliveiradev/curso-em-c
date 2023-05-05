/*Desenvolva um algoritmo que emule um caixa eletrônico. O usuário deve inserir o valor 
total a ser sacado da máquina e o algoritmo deve informar quantas notas de 100, 50, 
20, 10, 5 ou 2 reais serão entregues. Deve-se escolher as notas para que o usuário receba 
o menor número de notas possível.*/

#include <stdio.h>
int main(){

 int cem, cinq, vinte, dez, cinco, dois, saque;

 printf("Insira o valor a sacar:\n");
 scanf("%d", &saque);

 cem = saque / 100;
 saque = saque % 100;
 cinq = saque / 50;
 saque = saque % 50;
 vinte = saque / 20;
 saque = saque % 20;
 dez = saque / 10;
 saque = saque % 10;
 cinco = saque / 5;
 saque = saque % 5;
 dois = saque / 2;

 printf("nº notas R$ 100,00: %d.\n", cem);
 printf("nº notas R$ 50,00: %d.\n", cinq);
 printf("nº notas R$ 20,00: %d.\n", vinte);
 printf("nº notas R$ 10,00: %d.\n", dez);
}
