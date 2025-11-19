#include <stdlib.H>
#include <stdio.H>

void primo(int n, int a){

    if (n == a){
        printf("SEU NUMERO E PRIMO\n");    
        return;
    }

    if (n % a == 0){
        printf("SEU NUMERO NAO E PRIMO\n");
        return;
    }

    primo(n,a+1);

}

int main(){

    int n;

    printf("-------------------------------------------\n");
    printf("DIGITE O NUMERO A SER VERIFICADO:\n");
    scanf("%d", &n);

    primo(n,2);

    printf("\n");
    printf("-------------------------------------------\n");

    getchar();
    return 0;
}