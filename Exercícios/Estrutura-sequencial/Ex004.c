// Faça um programa que receba o salário de um funcionário, calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%

#include <stdio.h>

int main(){
    float salario, nsalario;

    printf("Insira o salário:\n");
    scanf("%f", &salario);

    nsalario = salario + salario*(25.0/100.0);

    printf("Novo salario:R$ %.2f.\n", nsalario); 
}