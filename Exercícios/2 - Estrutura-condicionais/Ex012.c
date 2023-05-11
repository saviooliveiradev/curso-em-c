/* Faça um programa que receba quatro 
valores, I, A, B e C. I é um valor inteiro e positivo e A, B e C são valores reais e distintos. 
Escreva os números A, B e C obedecendo à tabela a seguir. Supor que o valor digitado 
para I seja sempre um valor válido, ou seja, 1, 2 ou 3.
*/

#include <stdio.h>
int main(){
    float A, B, C;
    int I;
    printf("Insira o primeiro número (A):\n");
    scanf("%f", &A);
    printf("Insira o segundo número (B):\n");
    scanf("%f", &B);
    printf("Insira o terceiro número (C):\n");
    scanf("%f", &C);
    printf("Insira a opção (I):\n");
    scanf("%d", &I);

    if (I == 1){
        if((A < B) && (A < C)){
        if(B < C){
        printf("%f - %f - %f.\n", A, B, C);
        } else {
        printf("%f - %f - %f.\n", A, C, B);
        }
        }  
        if((B < A) && (B < C)){
        if(A < C){
        printf("%f - %f - %f.\n", B, A, C);
        } else {
        printf("%f - %f - %f.\n", B, C, A);
        }
        }
        if((C < A) && (C < B)){
        if(A < B){
        printf("%f - %f - %f.\n", C, A, B);
        } else {
        printf("%f - %f - %f.\n", C, B, A);
        }
    }
}
        if (I == 2){
        if((A > B) && (A > C)){
        if(B > C){
        printf("%f - %f - %f.\n", A, B, C);
        } else {
        printf("%f - %f - %f.\n", A, C, B);
        }
        }
        if((B > A) && (B > C)){
        if(A > C){
        printf("%f - %f - %f.\n", B, A, C);
        } else {
        printf("%f - %f - %f.\n", B, C, A);}
        }
        if((C > A) && (C > B)){
        if(A > B){
        printf("%f - %f - %f.\n", C, A, B);
        } else {
        printf("%f - %f - %f.\n", C, B, A);
        }
    }
}
        if(I == 3){
        if ((A > B) && (A > C)){
        printf("%f - %f - %f.\n", B, A, C);
        }
        if ((B > A) && (B > C)){
        printf("%f - %f - %f.\n", A, B, C);
        }
        if ((C > A) && (C > B)){
        printf("%f - %f - %f.\n", A, C, B);
        }
    }
}
