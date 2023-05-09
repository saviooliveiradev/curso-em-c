/*Faça um programa que receba dois números 
e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os 
números são iguais".
*/

#include <stdio.h>

int main(){

    float n1, n2;

    printf("Insira o primeiro valor:\n");
    scanf("%f", &n1);
    printf("Insira o segundo valor:\n");
    scanf("%f", &n2);

    if (n1 > n2){
        printf("O maior é: %f.\n", n1);
    }
    if (n2 > n1){
        printf("O maior é: %f.\n", n2);
    }
    if (n1 == n2){
        printf("Os números são iguais.\n");
    }

    system("pause");
    return 0; 
}