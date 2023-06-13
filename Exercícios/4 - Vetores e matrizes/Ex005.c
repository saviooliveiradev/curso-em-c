/*(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que carregue dois vetores 
de dez elementos numéricos cada um e mostre um vetor resultante da intercalação 
desses dois vetores.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(int argc, char const *argv[]){

    int vet1[10], vet2[10], inter[20];
    int i, j;

    for(i=0; i<10; i++){
        printf("Insira o dado vet1[%d]:\n", i);
        scanf("%d", &vet1[i]);
    }
    for(i=0; i<10; i++){
        printf("Insira o dado vet2[%d]:\n", i);
        scanf("%d", &vet2[i]);
    }

    j = 0;

    for(i=0; i<10; i++)|{
        inter[j] = vet1[i];
        inter[j+1] = vet2[i];
        j += 2;
    }
    for(i=0; i<20; i++){
        printf("%d", inter[i]);
    }

    return 0;
}