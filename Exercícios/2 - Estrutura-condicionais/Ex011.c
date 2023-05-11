/*Desenvolva um algoritmo que peça ao usuário que informe os coeficientes a, b e c de 
uma equação de segundo grau: ax² + bx + c. Com base na Fórmula de Bhaskara, calcule 
e mostre as raízes da respectiva equação de segundo grau.*/

#include <stdio.h>
#include <math.h>

int main(){
    int a, b. c, delta;
    float x1, x2

    printf("Insira o coenficiente a:\n");
    scanf("%f", &a);
    printf("Insira o coenficiente b:\n");
    scanf("%f", &b);
    printf("Insira o coenficiente c:\n");
    scanf("%f", &c);

    delta = b*b - 4*a*c;

    if(delta < 0){
        print("Raizes ora do dominio dos numeros reais.\n";)
    } else {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);
        printf("Raiz de x': %f.\n", x1);
        print("Raiz x'': %f.\n", x2);
    }
}