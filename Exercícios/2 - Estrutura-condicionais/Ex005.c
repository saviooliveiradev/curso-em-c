/*Desenvolva um algoritmo que simule uma calculadora. Você deve dar a opção de o 
usuário escolher entre: 1 - Somar; 2 - Subtrair; 3 - Multiplicar; 4 - Dividir. O usuário só 
conseguirá processar dois números inteiros por vez.*/

#include <stdio.h>
#define texto "Calculadora"

int main(){
    
    float n1, n2, soma, subtrair, multiplicar, dividir, n;

    printf(texto);

    printf("Digite o primeiro numero:\n");
    scanf("%f", &n1);
    printf("Digite o segundo numero:\n");
    scanf("%f", &n2);

    printf("Esolha sua operação:\n");
    printf("1 - soma.\n");
    printf("2 - subtrair.");
    printf("3 - multiplicar");
    printf("4 - dividir.");
    scanf("%f", &n);

    switch (n){
    case 1:
        printf("Somar: %f.\n", n1 + n2);
        break;
    case 2:
        printf("Subtrair: %f.\n", n1 - n2);
        break;
    case 3:
        printf("Multiplicar: %f.\n", n1 * n2);
        break;
    case 4:
        printf("Dividir: %f.\n", n1 / n2 );
        break;
    default 5:
        printf("Opcao invalida");
        break;
    }
}