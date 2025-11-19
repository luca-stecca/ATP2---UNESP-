#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int nmatricula = 1;

typedef struct cadastro {

    int nmat;
    char nome[50];
    struct cadastro *prox;

} Cadastro;

void cadastrar(Cadastro **lista, char frase[]){

    Cadastro *novo = (Cadastro*)malloc(sizeof(Cadastro));

    strcpy(novo->nome,frase);

    novo->nmat = nmatricula;

    novo->prox = *lista;

    *lista = novo;
    
    nmatricula++;
}

void imprimir(Cadastro *lista){

    Cadastro *atual = lista;

    while(atual != NULL){
        printf("NOME: %s, NUM DA MATRICULA: %d", atual->nome, atual->nmat);
        atual = atual->prox;
    }
}

void excluir(Cadastro **lista, int nexcl){

    Cadastro *atual = *lista;
    Cadastro *anterior = NULL;

    while(atual != NULL && atual->nmat != nexcl){
        anterior = atual;
        atual = atual->prox;
    }

    if(atual == NULL){
        printf("NAO FOI ENCONTRADO");
        return;
    }

    if(anterior == NULL){
        *lista = atual->prox;
    } else{
        anterior->prox = atual->prox;
    }

    free(atual);

}

void liberar(Cadastro *lista){
    Cadastro *atual = lista;
    while(atual->prox != NULL){
        Cadastro *temp = atual;
        atual = atual->prox;
        free(temp);
    }

}



int main(){
    Cadastro *lista = NULL;

    int opc=0;
    char nome[200];

    do{
        printf("ESCOLHA A OPCAO DESEJADA:\n");
        printf("(1) - ADICIONAR ALUNO\n");
        printf("(2) - IMPRIMIR LISTA:\n");
        printf("(4) - EXCLUIR ALUNO:\n");
        printf("(3) - ENCERRAR\n");
        printf("OPCAO:\n");
        scanf("%d", &opc);

        while(getchar() != '\n');

        switch(opc){

            case 1:
            printf("QUAL O NOME DO ALUNO: ");
            fgets(nome, sizeof(nome), stdin);
            nome[strcspn(nome, "\n")] = 0;
            cadastrar(&lista, nome);
            printf("\n");
            break;

            case 2:
            imprimir(lista);
            break;

            case 3:
            liberar(lista);
            printf("CONCLUIDO COM EXITO");
            break;
        }
    }while (opc != 3);

    }