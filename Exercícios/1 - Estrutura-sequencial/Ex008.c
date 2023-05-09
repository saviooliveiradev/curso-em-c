/*Faça um programa que receba o valor de um 
depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor 
total depois do rendimento.*/

#include <stdio.h>

int main(){

    float deposito, taxa, rendimento, valor;
    
    printf("Insira o valor do deposito:\n");
    scanf("%f", &deposito);
    printf("Qual e a taxa:\n");
    scanf("%f", &taxa);

    rendimento = deposito * taxa / 100;
    valor = deposito + rendimento;

    printf("Rendimento: %.2f.\n", rendimento);
    printf("Valor total: %.2f.\n", valor);

}