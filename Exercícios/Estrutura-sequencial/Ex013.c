/*Faça um programa que receba um número 
positivo e maior que zero, calcule e mostre:
a) o número digitado ao quadrado;
b) o número digitado ao cubo;
c) a raiz quadrada do número digitado;
d) a raiz cúbica do número digitado.
*/

#include <stdio.h>
#include <math.h>

int main(){

    float numero, quadrado, cubo, raiz_quadrada, raiz_cubica;

    printf("Insira um numero:\n");
    scanf("%f", &numero);

    quadrado = pow(numero, 2); //pow = é usada para calcular potências
    cubo = pow(numero, 3);
    raiz_quadrada = sqrt(numero);
    raiz_cubica = cbrt(numero);

    printf("Quadrado: %.2f.\n", quadrado);
    printf("Cubo: %.2f.\n", cubo);
    printf("Raiz quadrada: %.2f.\n", raiz_quadrada);
    printf("Raiz cubico: %.2f.\n", raiz_cubica);

}