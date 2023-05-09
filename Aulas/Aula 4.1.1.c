#include <stdio.h>

int main(){

    float m;

    printf("Insira a nota:\n");
    scanf("%f", &m);

    if(m >= 4 && m < 7.0){ //&& =tem que ser verdadeiro os dois 
        printf("Tem direito ao exame!\n");
    }

    return 0;
}