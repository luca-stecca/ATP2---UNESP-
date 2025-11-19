#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Aluno {
        char nome[50];
        int idade;
        float nota;
    };

    void cadastrar(){
    struct Aluno aluno;
    FILE *arq;

    arq = fopen("arqb.bin","ab");

    if(arq == NULL){
        printf("ERRO AO ABRIR ARQUIVO");
        return;
    }

    printf("NOME DO ALUNO: ");
    scanf(" %[^\n]", aluno.nome);

    printf("IDADE DO ALUNO: ");
    scanf("%d", &aluno.idade);

    printf("IDADE DO ALUNO: ");
    scanf("%f", &aluno.nota);

    fwrite(&aluno, sizeof(struct Aluno), 1, arq);
    
    fclose(arq);

    printf("ALUNO ADICIONADO COM SUCESSO!");
}

void listar(){
    struct Aluno aluno;
    FILE *arq;

    arq = fopen("arqb.bin","rb");

    if(arq == NULL){
        printf("ERRO AO ABRIR ARQUIVO");
        return;
    }

    printf("\nLista de Alunos:\n");
    while(fread(&aluno, sizeof(struct Aluno), 1, arq) == 1){
        printf("Nome: %s\n Idade: %d\n Nota: %f", aluno.nome, aluno.idade, aluno.nota);
    }

    fclose(arq);
}

void buscar(){
    struct Aluno aluno;

    FILE *arq;

    char nome[50];
    int e;

    arq = fopen("arqb.bin","rb");

    if(arq == NULL){
        printf("ERRO AO ABRIR ARQUIVO");
        return;
    }

    printf("DIGITE O NOME DO ALUNO: ");
    scanf(" %[^\n]", nome);

    while(fread(&aluno, sizeof(struct Aluno), 1, arq) == 1){
        if (strcmp(aluno.nome,nome) == 0){
            printf("ALUNO ENCONTRADO");
            printf("Nome: %s\n Idade: %d\n Nota: %f", aluno.nome, aluno.idade, aluno.nota);
            e = 1;
        }
    }

    if(e!= 1){
        printf("ALUNO NAO ENCONTRADO");
    }

    fclose(arq);
}

int main(){

    int opcao = -1;

    while(opcao != 0){

    printf("-----CADASTRANDO ALUNOS-----\n");
    printf("(0) - CADASTRAR ALUNO\n");
    printf("(1) - LISTAR ALUNOS\n");
    printf("(2) - BUSCAR ALUNO\n");
    printf("(3) - ENCERRAR PROGRAMA\n");
    scanf("%d", &opcao);

    if(opcao == 0){
        cadastrar();
    }
    else if(opcao == 1){
        listar();
    }
    else if(opcao == 2){
        buscar();
    }
    else if(opcao == 3){
        printf("ENCERRANDO...");
        break;
    }
    
    }

return 0;
}

