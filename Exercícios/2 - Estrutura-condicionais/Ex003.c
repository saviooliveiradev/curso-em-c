/*Faça um programa que receba um número 
inteiro e verifique se esse número é par ou ímpar.*/

#include <stdio.h>

int main(){
    int n1, r;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);

    r = n1 % 2;

    if (r == 0){
        printf("Onumero %d e par.\n", n1);
    }
    if (r!=0){
        printf("O numero %d e impar.\n", n1);
    }

    return 0;
}