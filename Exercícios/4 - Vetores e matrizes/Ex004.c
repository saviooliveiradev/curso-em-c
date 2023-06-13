/*(Adaptado de ASCENCIO e CAMPOS, 2008) Faça um programa que carregue um vetor e 
nove elementos numéricos inteiros, calcule e mostre os números primos e suas 
respectivas posições.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

int main(int argc, char const *argv[]){
    setlocale(LC_ALL, "Portuguese");

    int vet[9];
    int i, j, cont;

    for(i=0; i<9; i++){
        printf("Insira o dado da posição: %d.\n", i+1);
        scanf("%d", &vet[i]);
    }
    for(i=0; i<9; i++){
        cont = 0;
        for(j=1; j<=vet[i]; j++){
            if((vet[i] % j) == 0){
                cont++;
            }
        }
        if(cont == 2){
            printf("%d é  primo, posição: %d.\n", vet[i], i+);
        }
    }

    return 0;
}
