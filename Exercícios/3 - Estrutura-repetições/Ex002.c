/*Desenvolva um algoritmo que receba dois números inteiros positivos A e B. Exiba na tela 
todos os números inteiros compreendidos entre A e B, excluindo os próprios A e B. 
Suponha que o usuário respeite o enunciado e insira valores válidos para A e B.
*/

#include <stdio.h>

int main(){

    int a, b, i;

    printf("Insira um valor:\n");
    scanf("%d", &a);
    printf("Insira um valor:\n");
    scanf("%d", &b);

    i = a+1;

    while (a < b);{
        printf("%d", i);
        i++
    }
}