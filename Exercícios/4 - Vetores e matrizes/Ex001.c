/*Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Ao final, o 
algoritmo deve mostrar o somatório de todos os elementos do vetor, bem como a média 
aritmética entre todos os termos.*/

#include <stdio.h>

int main(int argc, char const *argv[]){

    float vet[10];
    float soma, media;
    int i;
    soma = 0;

    for(i=0; i<10; i++){
        printf("Insira o dado da posição %d:\n", i+1);
        scanf("%f", &vet[i]);
        soma = soma + vet[i];
    }
    
    media = soma/10;

    printf("Somatório: %f.\n", soma);
    printf("Média: %f.\n", media);

    return 0;
}
