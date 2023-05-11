/*Desenvolva um algoritmo que peça para que o usuário informe a base e a altura de um 
retângulo, e um terceiro número inteiro "op". Caso o usuário escolha "op" igual a 0, 
calcule e mostre o perímetro do retângulo. Caso o usuário insira um valor 1 para "op", 
calcule e mostre a área do retângulo. Se o usuário inserir um valor diferente de 0 e 1 
para "op", mostrar a mensagem "Opção inválida.".
*/

#include <stdio.h>

int main(){
    float altura, base, area, perimetro, n;

    printf("Insira a base:\n");
    scanf("%f", &base);
    printf("Insira a altura:\n");
    scanf("%f", &altura);

    printf("opcaos de processamento:\n");
    printf("Insira 0 para calcular o perimetro.\n");
    printf("Insira 1 para calcular a area.\n");
    scanf("%f", &n);

    area = base * altura;
    perimetro = (2*base) + (2*altura);

    if (n == 0){
        printf("perimetro: %f.\n", perimetro);
    }
    if (n == 1){
        printf("Area: %f.\n", area);
    }else {
        printf("Opcao invalida!\n");
    }
    

}