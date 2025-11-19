#include <stdlib.h>
#include <stdio.h>

float soma(int n){
    if(n == 1)
        return 1.0;        // primeiro termo é +1

    if(n % 2 == 0)
        return  (1.0/n) + soma(n-1);   // termo par é positivo
    else
        return -(1.0/n) + soma(n-1);   // termo ímpar é negativo
}


int main(){

    float r;
    int n;

    printf("-------------------------------------------\n");
    printf("DIGITE OS N PRIMEIROS NUMEROS DA SERIE QUE SERAO SOMADOS:\n");
    scanf("%d", &n);

    r = soma(n);

    printf("O RESULTADO E: \n%f\n", r);
    printf("-------------------------------------------\n");

    getchar();
    return 0;
}