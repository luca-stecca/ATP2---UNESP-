#include <stdlib.h>
#include <stdio.h>

int buscasequencial(int v[], int tam, int n){   

    int i;

    for(i=0; i < tam; i++){
        if(v[i] == n){
            return i;
        }
    }

    return -1;
}

int main(){

    int tam = 10, n, r;
    int v[tam] = {43,21,445,24,78,89,12,92,54,65};

    printf("\n");

    printf("DIGITE QUAL NUMERO VOCE DESEJA PROCURAR DENTRO DO NOSSO VETOR: \n");
    scanf("%d", &n);

    r = buscasequencial(v,tam,n);

    printf("\n");

    if(r != -1){
        printf("O NUMERO %d FOI ENCONTRADO NA POSICAO %d\n", v[r], r+1);
    } else{
        printf("VALOR NAO ENCONTRADO");
    }

    printf("\n");

    getchar();
    return 0;
}