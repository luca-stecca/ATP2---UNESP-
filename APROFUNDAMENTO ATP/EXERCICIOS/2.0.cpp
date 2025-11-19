#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[100];
    int tamanho = 0;

    printf("DIGITE SUA STRING: ");
    fgets(string, sizeof(string), stdin);

    tamanho = strlen(string);
    
    strrev(string);

    printf("SUA STRING DE TRAS P/ FRENTE: %s", string);
    

}