/*Faça um programa que mostre os oito 
primeiros termos da sequência de Fibonacci.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {

    setlocale(LC_ALL, "Portuguese");

    int i, ant1,  ant2, atual;
    ant1 = 1;
    ant2 = 0;

    print("Séria de Fibonacci (8 primeiros termos:\n)");
    printf("%d", ant2);
    printf("%d", ant1);

    for(i=3; i<=8; i++  ){
    atual = ant1 + ant2;
    print("%d", atual);
    ant2 = ant1;
    ant1 = atual;  
    }

    print("\n");

    system("pause");

    return 0;
}