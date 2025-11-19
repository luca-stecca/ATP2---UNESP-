#include <stdlib.H>
#include <stdio.H>

int mdc(int a, int b){

    int r;

    r = a % b;

    if (r == 0){
        return b;
    }

    a = b;
    b = r;

    return mdc (a,b);

}

int main(){

    int a, b, c, d;

    printf("-------------------------------------------\n");
    printf("DIGITE PRIMEIRO NUMERO PARA O CALCULO DO MDC:\n");
    scanf("%d", &a);

    printf("DIGITE SEGUNDO NUMERO PARA O CALCULO DO MDC:\n");
    scanf("%d", &b);

    printf("DIGITE TERCEIRO NUMERO PARA O CALCULO DO MDC:\n");
    scanf("%d", &c);

    d = mdc(mdc(a,b),c);

    printf("O MDC E: \n%d\n", d);
    printf("-------------------------------------------\n");

    getchar();
    return 0;
}