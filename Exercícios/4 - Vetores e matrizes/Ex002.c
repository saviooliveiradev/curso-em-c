/*Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Ao final, o 
algoritmo deve mostrar o somatório de todos os elementos do vetor, bem como a média 
aritmética entre todos os termos.*/

#include <stdio.h>

int main(int argc, char const *argv[]){

    float vet[5];
    int i;

    for(i=0; i<5; i++){
        printf("Insira o dado da posição %d:\n", i+1);
        scanf("%f", &vet[i]);
        vet[i] = vet[i]/100.0;
    }

    printf("Conteúdo divido por 100:\n");

    return 0;
}
