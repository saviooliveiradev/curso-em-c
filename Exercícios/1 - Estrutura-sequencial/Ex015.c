/*Sabe-se que:
1 pé = 12 polegadas;
1 jarda = 3 pés;
1 milha = 1760 jardas;
Faça um programa que receba uma medida em pés, faça as conversões a seguir e mostre 
os resultados.
a) polegadas;
b) jardas;
c) milhas.
*/

#include <stdio.h>

int main(){

    float pes, polegadas, jardas, milhas;

    printf("Insira a medida em pes:\n");
    scanf("%f", &pes);

    polegadas = pes * 12;
    jardas = pes * 3;
    milhas = pes * 1760;

 printf("Polegadas: %f.\n", polegadas);
 printf("Jardas: %f.\n", jardas);
 printf("Milhas: %f.\n", milhas);

}