#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int particiona (int v[], int i, int f){

    int pivo = (v[i] + v[f] + v[(i+f)/2])/3;

    while (i < f){
        while(i < f && v[i] <= pivo){
            i++;
        }
        while(i < f && v[f] > pivo){
            f--;
        }

        int aux = v[f];
        v[f] = v[i];
        v[i] = aux;

    }

    return i;
}



void quicksort(int v[], int i, int f){

    if( i < f){
        int p = particiona(v,i,f);
        quicksort(v,p,f);
        quicksort(v,i,p-1);
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

    quicksort(v,0,9);

    printf("\n");

    printf("SEU VETOR ORDENADO: \n");
    for(int i=0; i < 10; i++){
        printf("%d ", v[i]);
    }

}