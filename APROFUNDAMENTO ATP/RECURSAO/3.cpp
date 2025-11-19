#include <stdlib.H>
#include <stdio.H>

int pot(int p, int n){

    if(p == 0){
        return 1;
    } else{
    
        return(n * pot(p-1,n));

    }
}


int main(){

    int p, n, r;

    printf("-------------------------------------------\n");
    printf("DIGITE O NUMERO A SER ELEVADO:\n");
    scanf("%d", &n);

    printf("DIGITE A POTENCIA:\n");
    scanf("%d", &p);

    r = pot(p,n);

    printf("\n");

    printf("O RESULTADO E: \n%d\n", r);
    printf("-------------------------------------------\n");


    getchar();
    return 0;
}