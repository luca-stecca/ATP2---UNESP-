#include <stdlib.H>
#include <stdio.H>

void dig(int a){

    if (a < 10){
        printf("%d", a);
        return;
    } else {

            dig(a / 10);
            printf(",%d", a % 10);
    }

}

int main(){

    int a, n;

    printf("-------------------------------------------\n");
    printf("DIGITE UM NUMERO INTEIRO MAIOR QUE 9:\n");
    scanf("%d", &a);

    if (a <= 9){
        printf("NUMERO INVALIDO!!!");
        return 0;
    }

    dig(a);
    printf("\n");
    printf("-------------------------------------------\n");

    getchar();
    return 0;
}