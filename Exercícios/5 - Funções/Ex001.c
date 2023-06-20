/*(Adaptado de ASCENCIO e CAMPOS, 2008) O custo de um carro novo ao consumidor 
final é o preço de fábrica somado ao percentual de lucro do distribuidor, acrescido dos 
impostos aplicados ao preço de fábrica. Faça um programa que receba o preço de 
fábrica de um veículo, o percentual de lucro do distribuidor e o percentual de impostos. 
Em cada item, crie uma função distinta para calcular e retornar:

a) o valor correspondente ao lucro do distribuidor;
b) o valor correspondente aos impostos;
c) o preço final do veículo.

Após criar cada uma das funções, desenvolva um algoritmo que declare e invoque cada 
uma das funções, mostrando o lucro do distribuidor, os impostos e o valor final do 
veículo.*/

#include <stdio.h>
#include <string.h>
#include <locale.h>

float calcLucroDist(float p_fab, float por_dist){

    return p_fab * por_dist / 100;
}

float calcImpostos(float p_fab, float por_imp){
    return p_fab * por_imp / 100.0;
}

float calcPrecoFinal(float p_fab, float v_dist, float v_imp){

    return p_fab + v_dist + v_imp;
}


int main(int argc, char const *argv[]){
    setlocale(LC_ALL,"Portuguese");

    float preço_f, porce_dist, porce_i, lucro_dist, imp, vlr_f;

    printf("Insira o preço de fábrica:\n");
    scanf("%f", &preço_f);
    fflush(stdin);

    printf("Insira a porcetagem de lucro do distribuidor:\n");
    scanf("%f", &porce_dist);
    fflush(stdin);

    printf("Insira a porcentagem de impostos:\n");
    scanf("%f", &porce_imp);
    fflush(stdin);

    lucro_dist = calcLucroDist(preço_f, porce_dist);
    imp = calcImpostos(preço_f, porce_i);
    vlr_f = calcPrecoFinal(preço_f, lucro_dist, imp);

    printf("Lucro do distribuidor: R$ %.2f.\n", imp);
    printf("Impostos: R$ %.2f.\n", imp);
     printf("Valor final: R$ %.2f.\n", vlr_f);

    return 0;
}

