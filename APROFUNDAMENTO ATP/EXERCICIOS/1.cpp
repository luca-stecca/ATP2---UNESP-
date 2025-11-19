#include <stdio.h>
#include <stdlib.h>

int main(){
    
    FILE *arq;
    char nome[100];

    arq = fopen("nomes.txt","w");

    if (arq == NULL){
        printf("ERRO AO ABRIR ARQUIVO\n");
        return 1;
    }

    printf("ESCREVA 5 NOMES:\n");

    for(int i=0; i < 5; i++){

    printf("%d NOME: ", i+1);
    fgets(nome, sizeof(nome), stdin);
    fprintf(arq, "%s", nome);

    }

    if (arq != NULL){
        printf("NOMES ESCRITOS COM SUCESSO!\n");
    } else {
        printf("ERRO AO ESCREVER OS NOMES\n");
    }

    fclose(arq);

    return 0;
}
