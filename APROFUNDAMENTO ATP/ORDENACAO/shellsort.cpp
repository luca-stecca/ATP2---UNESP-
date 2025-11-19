#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void shellsort(int v[], int t){

    int aux, i, j;

    for(int gap = t/2; gap > 0; gap = gap/2){ //calcula o tamanho da distância entre os elementos que serão possivelmente trocados
        for(i = gap; i < t; i++){
            aux = v[i];
            for(j=i; (j >= gap) && (v[j-gap] > aux); j = j - gap){ 
                v[j] = v[j-gap];
            }
            v[j] = aux;
        }
    }

}

int main(){

    int v[10];

    printf("DIGITE SUA LISTA DE 1O NUMEROS (DIGITE UM NUMERO E DEPOIS APERTE ESPACO): \n");
    for(int i=0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    printf("SEU VETOR NAO ORDENADO: \n");
    for(int i=0; i < 10; i++){
        printf("%d ", v[i]);
    }

    shellsort(v,10);

    printf("\n");

    printf("SEU VETOR ORDENADO: \n");
    for(int i=0; i < 10; i++){
        printf("%d ", v[i]);
    }

}