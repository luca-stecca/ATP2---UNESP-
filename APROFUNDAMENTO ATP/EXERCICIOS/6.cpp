#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    FILE *arq1;
    FILE *arq2;
    FILE *arq3;

    char linha1[200], linha2[200];

    arq1 = fopen("arqc1.txt","r");

    if(arq1 == NULL){
        printf("ERRO AO ABRIR ARQUIVO 1");
    }

    arq2 = fopen("arqc2.txt","r");

    if(arq2 == NULL){
        printf("ERRO AO ABRIR ARQUIVO 2");
    }

     arq3 = fopen("arqc3.txt","w");

    if(arq3 == NULL){
        printf("ERRO AO ABRIR ARQUIVO 3");
    }

    while((fgets(linha1, sizeof(linha1), arq1) != NULL) && (fgets(linha2, sizeof(linha2), arq2) != NULL)){
        linha1[strcspn(linha1, "\n")] = '\0';

            fprintf(arq3, "%s %s", linha1, linha2);
    }

    if(arq3 != NULL){
        printf("CONCATENACAO CONCLUIDA COM EXITO!");
    }

fclose(arq1);
fclose(arq2);
fclose(arq3);

return 0;
}