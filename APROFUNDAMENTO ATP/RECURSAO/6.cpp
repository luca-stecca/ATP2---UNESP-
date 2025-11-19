#include <stdlib.H>
#include <stdio.H>

int soma(int n){

    if (n < 10){
        return n;
    }

    return(soma(n/10) + soma(n % 10)); 

}

int main(){

    int n, r;

    printf("-------------------------------------------\n");
    printf("DIGITE O NUMERO CUJO OS DIGITOS SERAO SOMADOS:\n");
    scanf("%d", &n);

    r = soma(n);

    printf("O RESULTADO E: \n%d\n", r);
    printf("-------------------------------------------\n");

    getchar();
    return 0;
}