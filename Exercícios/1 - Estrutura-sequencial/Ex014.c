/*) Faça um programa que receba dois números 
maiores que zero, calcule e mostre um elevado ao outro.*/

#include <stdio.h>
#include <math.h>

int main(){

    float num1, num2, potencia;
    
    printf("Insira o primeiro número:\n");
    scanf("%f", &num1);
    printf("Insira o segundo numero:\n");
    scanf("%f", &num2);

    potencia = pow(num1, num2);

    printf("Resultado: %.2f.\n", potencia);
}