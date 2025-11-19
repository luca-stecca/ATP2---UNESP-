#include <stdlib.H>
#include <stdio.H>

int soma (int n){

    if(n == 0){
        return 0;
    } else

    return(n + soma(n-1));
}



int main(){

    int n, r;

    printf("-------------------------------------------\n");
    printf("Calcular a soma dos n primeiros inteiros positivos, digite o valor de n:\n");
    scanf("%d", &n);

    r = soma(n);

    printf("O resultado da sua soma e: %d\n", r);
    
    printf("-------------------------------------------\n");

    getchar();
    return 0;
}