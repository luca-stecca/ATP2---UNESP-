#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arq;

    char linha[200], p[50];
    int cont = 0;

    arq = fopen("arquivo.txt","r");

    if(arq == NULL){
        printf("ERRO AO ABRIR ARQUIVO");
    }

    printf("DIGITE A PALAVRA QUE DESEJA BUSCAR: ");
    scanf("%s", p);

    printf("\n");

    while(fgets(linha, sizeof(linha), arq) != NULL){
        cont = cont + 1;

        if(strstr(linha, p) != NULL){
            printf("PALAVRA ENCONTRADA NA LINHA %d: %s", cont, linha);
        }
    }

    printf("\n");

fclose(arq);
return 0;
}