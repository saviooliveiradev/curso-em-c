/*Faça um programa que receba o salário de 
um funcionário, calcule e mostre o novo salário desse funcionário, acrescido de 
bonificação e de auxílio-escola.
*/

#include <stdio.h>
    int main(){
    float sal, sal_novo, bonif, aux;

    printf("Informe o salário:\n");
    scanf("%f", &sal);

    if(sal <= 500){
    bonif = sal * 0.05;
    }
    if(sal > 500){
    bonif = sal * 0.12;
    }
    if(sal > 1200){
    bonif = 0;
    }
    if(sal <= 600){
    aux = 150;
    }
    if(sal > 600){
    aux = 100;
    }
    sal_novo = sal + bonif + aux;
    printf("Salário total: %.2f.\n", sal_novo);
}