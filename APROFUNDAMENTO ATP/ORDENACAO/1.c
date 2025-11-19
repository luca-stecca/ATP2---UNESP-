#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void bubblesort(int v[], int n){

    int v2;

    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - 1; j++){
            if(v[j] > v[j+1]){
                v2 = v[j+1];
                v[j+1] = v[j];
                v[j] = v2;
            }
        }
    }

}

int particiona(int v[], int i, int f){

    int pivo = (v[i] + v[f] + v[(i+f)/2]) / 3;

    while (i < f){
        while ((i < f) && (v[i] <= pivo)){ // buscando elemento maior que o pivo para troca
            i++;
        }
        while ((i < f) && (v[f] > pivo)){ // buscando elemento menor ou igual ao pivo para troca
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
        quicksort(v,i,p-1);
        quicksort(v,p,f);
    }
}

void insertionsort(int v[], int fim, int n){

    if(fim >= n) return; // a cond de parada seria quando o contador chega no mesmo valor do tamanho, ou seja, no fim do vetor
 
        int aux, j=fim;
        aux = v[j];

        while((j > 0) && (aux < v[j-1])){
            v[j] = v[j-1];
            j--;
        }

        v[j] = aux;

        insertionsort(v, fim + 1, n);

}

void shellsort (int v[], int n){

    int aux, j, i;

    for(int gap = n/2; gap > 0; gap = gap/2){
        for(i = gap; i < n; i++){
            aux = v[i];
            for(j = i; (j>=gap) && (v[j-gap] > aux); j = j - gap){ //vê se a posição atual é maior ou igual ao GAP definido e compara a posição j-gap ao vetor "inicial"
                v[j] = v[j-gap];
            }
            v[j] = aux;
        }
    }

}

void selectsort(int v[], int ini, int t){

    int j, m;

    if(ini < t){

        m = ini;

        for(j = ini+1; j < t; j++){
            if(v[j] < v[m]){
                m = j;
            }
            int aux = v[ini];
            v[ini] = v[m];
            v[m] = aux;
        }
        selectsort(v, ini+1, t);
    }

    return;
}

void merge(int v[], int ini, int meio, int fim){

    int n1 = meio - ini + 1;
    int n2 = fim - meio;

    int *esq = malloc(n1* sizeof(int));
    int *dir = malloc(n2* sizeof(int));

    for(int i=0; i < n1; i++){
        esq[i] = v[ini + i];
    }
    for(int j=0; j < n2; j++){
        dir[j] = v[meio + 1 +j];
    }

    int i=0, j=0, k=ini;
    while((i < n1) && (j < n2)){
        if(esq[i] <= dir[j]){
            v[k] = esq[i];
            i++;
        } else{
            v[k] = dir[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        v[k] = esq[i];
        i++;
        k++;
    }
    while(j < n2){
        v[k] = dir[j];
        j++;
        k++;
    }

    free(esq);
    free(dir);

}

void mergesort(int v[], int ini, int fim){

    if(ini < fim){
        int meio = ini + (fim - ini)/2;
        mergesort(v, ini, meio);
        mergesort(v, meio+1, fim);
        merge(v,ini,meio,fim);
    }

}

int main(){

    int v[10], o = -1;

    printf("------------------------------------------------------------------------- \n");
    printf("DIGITE SUA LISTA DE 1O NUMEROS (DIGITE UM NUMERO E DEPOIS APERTE ESPACO): \n");
    for(int i=0; i < 10; i++){
        scanf("%d", &v[i]);
    }

    printf("\n");

    printf("SUA LISTA NAO ORDENADA: \n");
    for(int i=0; i < 10; i++){
        printf("%d ", v[i]);
    }

    int n = 10;

    printf("\n");

    while (o != 9){
    printf("\n");
    printf("------------------------------------------------------------------------- \n");
    printf("QUAL TIPO DE ORDENACAO VOCE DESEJA? \n");
    printf("(1) - BUBBLE SORT\n");
    printf("(2) - QUICK SORT\n");
    printf("(3) - INSERTION SORT\n");
    printf("(4) - SHELL SORT\n");
    printf("(5) - SELECT SORT\n");
    printf("(6) - MERGE SORT\n");
    printf("(9) - SAIR\n");
    scanf("%d", &o);
    printf("------------------------------------------------------------------------- \n");

    printf("\n");

    if (o == 1){
        bubblesort(v, 10);
        printf("O SEU VETOR ORDENADO POR BUBBLE SORT:\n");
        for(int i=0; i < n; i++){
            printf("%d ", v[i]);
        }
        printf("\n");
    } else if (o == 2){
        quicksort(v,0,9);
        printf("O SEU VETOR ORDENADO POR QUICK SORT:\n");
        for(int i=0; i < n; i++){
            printf("%d ", v[i]);
        }
        
        printf("\n");
    } else if (o == 3){
        shellsort(v,10);
        printf("O SEU VETOR ORDENADO POR INSERTION SORT:\n");
        for(int i=0; i < n; i++){
            printf("%d ", v[i]);
        }
        
        printf("\n");
    } else if (o == 4){
        insertionsort(v,1,10);
        printf("O SEU VETOR ORDENADO POR SHELL SORT:\n");
        for(int i=0; i < n; i++){
            printf("%d ", v[i]);
        }
        
        printf("\n");
    } else if (o == 5){
        selectsort(v,0,10);
        printf("O SEU VETOR ORDENADO POR SELECT SORT:\n");
        for(int i=0; i < n; i++){
            printf("%d ", v[i]);
        }
        
        printf("\n");
    } else if (o == 6){
        mergesort(v,0,9);
        printf("O SEU VETOR ORDENADO POR MERGE SORT:\n");
        for(int i=0; i < n; i++){
            printf("%d ", v[i]);
        }
        
        printf("\n");
    } else if (o == 9){
        printf("OBRIGADO PELA PREFERENCIA :)\n");
        printf("\n");
    } else {
        printf("OPCAO INVALIDA!!!\n");
    }

    }

    printf("------------------------------------------------------------------------- \n");

    getchar();
    return 0;
}