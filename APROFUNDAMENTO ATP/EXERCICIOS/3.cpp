#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[100];
    char vogais[] = "aeiou";
    int tamanho = 0, contador = 0;

    printf("DIGITE SUA STRING: \n");
    fgets(string, sizeof(string), stdin);

    tamanho = strlen(string);

    for(int j = 0; j < 5; j++){
        for(int i = 0; i < tamanho; i++){
            if (string[i] == vogais[j]){
                contador = contador + 1;
            }
        }
    }

    printf("SUA STRING TEM %d VOGAIS \n", contador);

}