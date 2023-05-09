//Faça um programa que receba o salário de um funcionário e o percentual de aumento, calcule e mostre o valor do aumento e o novo salário.

#include <stdio.h>

int main(){
    float salario, percentual, aumento, novo_sal;

    printf("Insira o salario:\n");
    scanf("%f", &salario);

    printf("Insira o percentual de aumento:\n");
    scanf("%f", &percentual);

 aumento = (salario * percentual / 100);
 novo_sal = salario + aumento;

    printf("Valor do aumento: %.2f.\n", aumento);
    printf("Novo salario: %.2f.\n", novo_sal);
}
