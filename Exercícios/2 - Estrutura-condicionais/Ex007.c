/*A nota final de um estudante é calculada a 
partir de três notas atribuídas respectivamente a um trabalho de laboratório, a uma 
avaliação semestral e a um exame final. A média das três notas mencionadas 
anteriormente obedece aos pesos a seguir:*/

#include <stdio.h>

int main(){

    float n1, n2, n3, media;

    printf("Insira a nota do trabalho:\n");
    scanf("%f", &n1);
    printf("Insira a nota da avaliação:\n");
    scanf("%f", &n2);
    printf("Insira a nota do exame:\n");
    scanf("%f", &n3);

    media = (n1 + n2 +n3) / 3;

    printf("Media: %.2f.\n", media);

    if (media >= 8.0){
        printf("Conceito A.\n");
    }
    if ((media >= 7.0)  && (media < 8.0 )){
        printf("Conceito B.\n");
    }
    if ((media >= 6.0) && (media < 7.0)){
        printf("Conceito C.\n");
    }
    if ((media >= 5.0) && (media < 6.0)){
    printf("Conceito D.\n");
 }
 if ((media >= 0.0) && (media < 5.0)){
    printf("Conceito E.\n");
 }

}