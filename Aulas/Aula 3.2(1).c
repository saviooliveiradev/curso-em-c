#include <stdio.h>

int main(){

    int dado = 10;
    printf("Depois antes do incremento: %d.\n", dado);

    dado++;
    printf("Dado depois do incremento: %d.\n", dado);

    dado--;
    printf("Depois do decremento: %d.\n", dado);

    dado +=3;
    printf("Depois do incremento em 3 unidade: %d.\n", dado);

    dado -=2;
    printf("Depois do decremento de 2 unidade: %d.\n", dado);

    dado *= 10;
    printf("Depois de multiplicar  10 unidade: %d.\n", dado);
}