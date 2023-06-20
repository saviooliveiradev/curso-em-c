/*argc é um dado inteiro, podendo usar dentro do main para saber quantos argumentos
 foram usando no programa, ele conta todas as palavras que foram separada por espaço*/

//argv ele guarda todo o texto que vier a ser digitado na linha de comado (cmd)

#include <stdio.h>

int main(int argc, char const *argv[]){ 
    
    int i;

    if(argc > 1){
        printf("Foram inseridos %d argumentos: ");
        for(i=0; i<argc; i++){
            printf("%s\n", argv[i]);
        }
    } else {
        printf("Não foram inseridos argumentos no programa.\n");
    }
}
