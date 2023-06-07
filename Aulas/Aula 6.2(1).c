#include <stdio.h>

int main(){
    char s[10];

    printf("Digite algo (leitura pelo gets):\n");
    gets(s); //estoura tbm o limete do vetor e só serve para str
    fflush(stdin);

    puts("Resuldado:"); // puts = só permite imprimi tipo de str na tela 
    puts(s);
    puts("");

    printf("Dgite algo (leitura pelo fgets):\n");
    fgets(s, 10, stdin); //já reserva o /0 daa str, só serve para tipo de str
    fflush(stdin);

    puts("Resultado:");
    puts(s);

}