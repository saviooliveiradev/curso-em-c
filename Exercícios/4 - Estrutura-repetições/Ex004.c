/*Desenvolva um algoritmo que receba um número N e imprima a tabuada de N, na tela.
*/

#include <stdio.h>

int main(){

    int i, res, N;

    printf("Insira N: ");
    scanf("%d", &N);

    i = 1;
    while (i <= 10){
        res = N*i;
        printf("%d x %d = %d\n", N, i, res);
        i++;
    }
    
}