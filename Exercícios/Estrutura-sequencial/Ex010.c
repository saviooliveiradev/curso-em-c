/*Faça um programa que calcule e mostre a 
área de um círculo. Sabe-se que: Área = Pi * R², aonde Pi = 3,14.*/

#include <stdio.h>

int main(){
    float raio, area;
    float pi = 3.14;

    printf("Insira o raio:\n");
    scanf("%f", &raio);
     area = pi * raio * raio;

     printf("Area do circulo: %.2f.\n", area);
}