#include <stdio.h>

int main(){
    int A, B, soma, subtr, mult;
    float divis;

    printf("Digite o primeiro valor:\n");
    scanf("%d", &A);
    printf("Digite  o segundo valor:\n");
    scanf("%d", &B);

    soma = A + B;
    subtr = A - B;
    mult = A * B;
    divis = A / B;

    printf("Resultado:\n");
    printf("Soma:%d.\n", soma);
    printf("Subtr:%d.\n", subtr);
    printf("Mult:%d.\n", mult);
    printf("Divis:%f.\n", divis);
}