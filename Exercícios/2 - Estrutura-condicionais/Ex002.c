/*Desenvolva um algoritmo que receba três números. O algoritmo deve imprimir 
"Condição satisfeita", na tela, caso o primeiro dado inserido seja maior do que os outros 
dois (o primeiro não pode ser igual a nenhum). Caso contrário, deve ser impressa a 
mensagem: "Erro".
*/

#include <stdio.h>

int main(){
    float n1, n2, n3;

    printf("Insira o primeiro numero:\n");
    scanf("%f", &n1);
    printf("Insira o segundo numero:\n");
    scanf("%f", &n2);
    printf("Insira o terceiro numero:\n");
    scanf("%f", &n3);

    if ((n1 > n2) && (n2 > n3)){
        printf("Condição satisfeita.\n");
    } else {
        printf("Erro.\n");
    }

    return 0; 
}