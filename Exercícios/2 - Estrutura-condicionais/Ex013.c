/* Faça um programa que mostre o menu de 
opções a seguir, receba a opção do usuário e dos dados necessários para executar cada 
operação. Suponha que o usuário não irá inserir valores inválidos.
Menu de opções:
1. Somar dois números
2. Raiz quadrada de um número
Digite a opção desejada*/

#include <stdio.h>
#include <math.h>
    int main(){
    float n1, n2, calc;
    int op;
    printf("---- Menu de Opções ----\n");
    printf("1 - Somar dois números;\n");
    printf("2 - Raiz quadrada de um número.\n");
    scanf("%d", &op);

    if(op == 1){
    printf("Insira o primeiro número:\n");
    scanf("%f", &n1);
    printf("Insira o segundo número:\n");
    scanf("%f", &n2);
    calc = n1 + n2;
    printf("Resultado da soma: %f.\n", calc);
    }
    if(op == 2){
    printf("Insira o número:\n");
    scanf("%f", &n1);
    calc = sqrt(n1);
    printf("Resultado da raiz quadrada: %f.\n", calc);
    }
}