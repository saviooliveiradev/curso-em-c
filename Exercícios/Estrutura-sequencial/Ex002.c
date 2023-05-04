//Faça um programa que receba três notas, calcule e mostre a média aritmética entre elas.

#include <stdio.h>
#define texto "Digite suas 3 notas do semestre."
int main(){
    
    float nota1, nota2, nota3, soma, media;

    printf(texto"\n");

    printf("Primeira nota:\n");
    scanf("%f", &nota1);
    

    printf("Segunda nota:\n");
    scanf("%f", &nota2);

    printf("Terceira nota:\n");
    scanf("%f", &nota3);

    soma = nota1 + nota2 + nota3;
    media = soma / 3;

    printf("Seu resultado final: %.1f.\n", media);
}