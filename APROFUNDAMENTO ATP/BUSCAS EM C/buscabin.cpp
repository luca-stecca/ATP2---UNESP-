#include <stdlib.h>
#include <stdio.h>

int buscabinaria(int v[], int tam, int n){   

    int ini=0, fim=tam-1;

    while(ini <= fim){
        int meio = (ini+fim)/2;

        if(v[meio] == n){
            return meio;
        } else if(v[meio] > n){
            fim = meio-1;
        } else{
            ini = meio+1;
        }
    }

    return -1;
}

int particiona(int v[], int i, int f){

    int pivo = (v[i] + v[f] + v[(i+f)/2])/3;

    while(i < f){
        while(i < f && v[i] <= pivo){
            i++;
        }
        while(i < f && v[f] > pivo){
            f--;
        }

        int aux = v[i];
        v[i] = v[f];
        v[f] = aux;
    }

    return i;

}

void quicksort(int v[], int i, int f){
    
    if(i < f){
        int p = particiona(v,i,f);
        quicksort(v,p,f);
        quicksort(v,i,p-1);
    }
}

int main(){

    int tam = 10, n, r;
    int v[tam] = {43,21,445,24,78,89,12,92,54,65};

    printf("\n");

    printf("DIGITE QUAL NUMERO VOCE DESEJA PROCURAR DENTRO DO NOSSO VETOR: \n");
    scanf("%d", &n);

    quicksort(v,0,9);

    r = buscabinaria(v,tam,n);

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