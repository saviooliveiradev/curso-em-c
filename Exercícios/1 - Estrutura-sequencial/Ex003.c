//Faça um programa que receba três notas e seus respectivos pesos, calcule e mostre a média ponderada dessas notas.

#include <stdio.h>

int main(){
    float n1, p1, n2, p2, n3, p3, mult;

    printf("Insira a primeira nota:\n");
    scanf("%f", &n1);
    printf("Insira o peso da primeira nota:\n");
    scanf("%f", &p1);

    printf("Insira a segunda nota:\n");
    scanf("%f", &n2);
    printf("Insira o peso da segunda nota:\n");
    scanf("%f", &p2);

    printf("Insira a terceira nota:\n");
    scanf("%f", &n3);
    printf("Insira o peso da terceira nota:\n");
    scanf("%f", &p3);

    mult = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);

    printf("Media ponderada: %f.\n", mult);

}