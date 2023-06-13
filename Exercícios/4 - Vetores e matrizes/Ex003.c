/*Desenvolva um algoritmo que preencha um vetor numérico de 10 posições. Após 
preencher todo o vetor, o usuário deve inserir uma chave de busca X. Caso exista algum 
número igual a X, dentro do vetor, o algoritmo deve mostrar, na tela, o índice da 
primeira posição na qual X foi encontrado. Caso contrário, o algoritmo deve se encerrar 
com uma única mensagem, dizendo "Chave não encontrada.".*/

#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[]){

    float x, vet[10];
    int i, p;
    bool achou;

    for(i=0; i<10; i++){
        printf("Insira o dado da posição %d:\n", i+1);
        scanf("%f", &vet[i]);
    }

    printf("Insira a chave de buscar:\n");
    scanf("%f", &x);
    i = 0;
    while ((i <10) && (achou == false)){
        if(vet[i] == x){
            achou = true;
            p = i;
        }
        i++;
    }

    if(!achou){
        printf("Chave não encontrada.\n");
    } else {
        printf("Chave encontrada na posição %d.\n", p+1;)
    }
    
    return 0;
}
