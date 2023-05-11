/*Faça um programa que receba três notas de 
um aluno, calcule e mostre a média aritmética e a mensagem que segue a tabela abaixo. 
Para alunos de exame, calcule e mostre a nota que deverá ser tirada no exame para 
aprovação, considerando que a média no exame é 6,0.*/

#include <stdio.h>

int main(){

    float n1, n2, n3, media, exame;

    printf("Insira a primeira nota:\n");
    scanf("%f", &n1);
    printf("Insira a segunda nota:\n");
    scanf("%f", &n2);
    printf("Insira a terceira nota:\n");
    scanf("%f", &n3);

    media = (n1+n2+n3) / 3;

    printf("Media: %.2f.\n", media);

    if (media<= 3.0){
        printf("Reprovado(a).\n");
    }
    if ((media>=7.0) && (media<7.0)){
        printf("Exame.");
        exame = 12 - media;
        printf("É preciso tirar %.1f no exame.\n", exame);
    }
    if ((media>=7.0) && (media<10.0 )){
        printf("Aprovado, parabens.\n");
    }
}