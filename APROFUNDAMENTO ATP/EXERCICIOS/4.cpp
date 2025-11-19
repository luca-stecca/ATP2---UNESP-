#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string[100];
    int tamanho = 0, p = 0;

    printf("DIGITE SUA STRING: \n");
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = '\0';

    tamanho = strlen(string);

    int j = tamanho - 1;

    for(int i = 0; i < tamanho; i++){

        if(string[i] != string[j]){
            p = 1;
            break;
        }

        j--;
    }

    if (p == 1){
        printf("SUA STRING NAO E UM PALINDROMO\n");
    } else{
        printf("SUA STRING E UM PALINDROMO\n");
    }
    
    getchar();
    return 0;

}