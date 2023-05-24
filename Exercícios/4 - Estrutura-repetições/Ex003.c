/*Desenvolva um algoritmo que receba um número N e calcule o fatorial de N, sabendo 
que N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1.*/

#include<stdio.h>

int main(){

    float i, N, fat;

    printf("Insire um valor:\n");
    scanf("%f", &N);

    fat = 1;
    
    for(i=N; i>=1; i--){
        fat = fat * i;
    }

    printf("O fatorial de %d é %d.\n", N, fat);
}