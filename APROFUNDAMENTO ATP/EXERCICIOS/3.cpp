#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *arq;
    char linha[100];
    int cont = 0;

    arq = fopen("nomes.txt","r");

    if(arq == NULL){
        printf("ERRO AO ABRIR ARQUIVO");
    }

    while(fgets(linha, sizeof(linha), arq) != NULL){
        cont = cont + 1;
    }

    printf("O SEU ARQUIVO TEM %d LINHAS", cont);
    
fclose(arq);
return 0;
}