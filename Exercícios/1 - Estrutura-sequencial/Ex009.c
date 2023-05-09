/*Faça um programa que calcule e mostre a 
área de um triângulo. Sabe-se que: Área = (base * altura)/2.*/

#include <stdio.h>

int main(){
    
    float base, altura, area;

    printf("Insira a base:\n");
    scanf("%f", &base);
    printf("Insira aa altura:\n");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("Area do triangulo: %.2f.\n", area);
}