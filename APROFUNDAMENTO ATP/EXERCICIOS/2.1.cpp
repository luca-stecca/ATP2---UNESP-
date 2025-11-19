#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char string[100];
    int tamanho = 0;

    printf("DIGITE SUA STRING: \n");
    fgets(string, sizeof(string), stdin);

    tamanho = strlen(string);
    

    printf("SUA STRING DE TRAS P/ FRENTE: ");
    for(int i = tamanho; i >= 0; i--){
        printf("%c", string[i]);
    }
    
}