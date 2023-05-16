/*Desenvolva um algoritmo que some todos os números inteiros compreendidos entre 1 
e 10 (inclusive).
*/

#include <stdio.h>
    int main(){
    int soma, i;
    soma = 0;
    i = 1;
    
    while(i<=10){
        soma = soma + i; //soma += i
        i = i + 1; // i++
    }
    printf("Somatório: %d.\n", soma);
}