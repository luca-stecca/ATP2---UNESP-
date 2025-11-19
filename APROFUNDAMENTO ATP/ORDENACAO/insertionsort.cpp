#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void insertionsort(int v[], int i, int t){

    if(i >= t) return;

    int aux, j=i;

    aux = v[j];

    while((j > 0) && (aux < v[j-1])){
        v[j] = v[j-1];
        j--;
    }

    v[j] = aux;

    return insertionsort(v,i+1,t);
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

    insertionsort(v,1,10);

    printf("\n");

    printf("SEU VETOR ORDENADO: \n");
    for(int i=0; i < 10; i++){
        printf("%d ", v[i]);
    }

}