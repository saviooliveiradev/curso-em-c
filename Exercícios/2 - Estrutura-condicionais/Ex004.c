/*Desenvolva um algoritmo que receba dois números, calcule e mostre a multiplicação 
entre eles, se ambos forem iguais. Caso o primeiro seja maior que o segundo, mostre a 
subtração do primeiro pelo segundo. Caso contrário, mostre a soma entre os dois.*/

#include <stdio.h>

int main(){

    float n1, n2, mult, subt, soma;

    printf("Insira o primeiro valor:\n");
    scanf("%f", &n1);
    printf("Insira o segundo valor:\n");
    scanf("%f", &n2);

    mult = n1 * n2;
    subt = n1 - n2;
    soma = n1 + n2;

    if (n1 == n2){
        printf("Multiplicação: %f.\n", mult);
    }
    if (n1 > n2){
        printf("Subtra: %f.\n", subt);
    }
    if (n1 < n2){
        printf("Soma; %f.\n", soma);
    }

    return 0;

}