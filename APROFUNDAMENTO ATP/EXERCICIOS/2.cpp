#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq;
    char nome[100];

    arq = fopen("nomes.txt","r");

    if (arq == NULL){
        printf("ERRO AO ABRIR ARQUIVO");
    }

    printf("NOMES LIDOS:\n");

    while (fgets(nome, sizeof(nome), arq) != NULL){
        printf("%s", nome);
    }

    fclose(arq);
    return 0;
}