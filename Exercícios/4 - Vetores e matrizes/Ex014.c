/*Faça um programa que seja capaz de armazenar os dados de três pessoas: nome, idade, 
peso e altura. Ao final, o algoritmo deve mostrar, na tela, o nome e a idade da primeira 
pessoa e o peso e altura da última pessoa.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct tipo_pessoa{
    char nome [50];
    int idade;
    float peso;
    float altura;
};

int main(int argc, char const *argv[]){
    setlocale(LC_ALL, "Portuguese");

    typedef struct tipo_pessoa lista[3];
    int i;

    for(i=0; i<3; i++){
        printf("Insira o nome da pessoa da posição %d:\n", i);
        scanf("%199[^\n]s", &lista[i].nome);
        fflush(stdin);

        printf("Insira a idade da posição %d:\n", i);
        scanf("%d", &lista[i].idade);
        fflush(stdin);

        printf("Insire o peso da posilçãp %d:\n", i);
        scanf("%f", &lista[i].peso);
        fflush(stdin);

        printf("Isnira a altura da posição: %d:\n", i);
        scanf("%f", &lsita[i].altura);
        fflush(stdin);
    }

    printf("Nome da primeira pessoa: %s.\n", lista[0].nome);
    printf("Idade da primeira pessoa: %d.\n", lista[0].idade);

    printf("Altura da última pessoa: %.2f.\n", lista[2].altura);
    printf("Peso da última pessoa: %.2f.\n", lista[2].peso);

    return 0;
}


