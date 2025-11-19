#include <stdio.h>
#include <stdlib.h>

int main(){

    FILE *arq1;
    FILE *arq2;

    char nomearq1[50], nomearq2[50], conteudo[200];

    printf("TRANSFERINDO CONTEUDO ENTRE ARQUIVOS\n");

    printf("QUAL O NOME DO ARQUIVO DE ORIGEM: ");
    scanf("%s", nomearq1);

    printf("QUAL O NOME DO ARQUIVO DE DESTINO: ");
    scanf("%s", nomearq2);

    arq1 = fopen(nomearq1,"r+");

    if (arq1 == NULL){
        printf("ERRO AO ABRIR ARQUIVO DE ORIGEM");
    }

    arq2 = fopen(nomearq2,"r+");

     if (arq2 == NULL){
        printf("ERRO AO ABRIR ARQUIVO DE DESTINO");
    }

    while(fgets(conteudo, sizeof(conteudo), arq1) != NULL){
        fprintf(arq2,"%s", conteudo);
    }

     if (arq2 != NULL){
        printf("CONTEUDO TRANSFERIDO COM EXITO!");
    }


fclose(arq1);
fclose(arq2);

return 0;
}