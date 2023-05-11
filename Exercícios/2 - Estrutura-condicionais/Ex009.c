/*Faça um programa que receba três números
distintos e mostre-os em ordem crescente.*/

#include <stdio.h>

int main(){

    int n1, n2, n3;

    printf("Insira o primeiro numero:\n");
    scanf("%d", &n1);
    printf("Insira o segundo numero:\n");
    scanf("%d", &n2);
    printf("Insira o terceiro numero:\n");
    scanf("%d", &n3);

    if ((n1 > n2) && (n1 > n3)){
        if (n2 < n3){
            printf("%d - %d - %d.\n", n1, n2, n3);
        } else {
            printf("%d - %d - %d.\n", n1, n2, n3);
        }
    }
    if((n2 < n1) && (n2 < n3)){
        if(n1 < n3){
        printf("%f - %f - %f.\n", n2, n1, n3);
    } else {
        printf("%f - %f - %f.\n", n2, n3, n1);
 }
 }
    if((n3 < n1) && (n3 < n2)){
        if(n1 < n2){
        printf("%f - %f - %f.\n", n3, n1, n2);
    } else {
     printf("%f - %f - %f.\n", n3, n2, n1);
    }
 }
}