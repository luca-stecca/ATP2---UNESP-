#include <stdlib.H>
#include <stdio.H>

int fib (int n){

    if ( n == 1 ){
        return (0);
    }

    if ( n == 2 ){
        return (1);
    }

    return (fib(n-1)+fib(n-2));

}

int main(){

    int n, r;

    printf("-------------------------------------------\n");
    printf("DIGITE O N-ESIMO TERMO A SER CALCULADO O VALOR NA SEQUENCIA DE FIBONACCI:\n");
    scanf("%d", &n);

    r = fib(n);

    printf("O RESULTADO E: \n%d\n", r);
    printf("-------------------------------------------\n");

    getchar();
    return 0;
}