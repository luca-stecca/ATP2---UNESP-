#include <stdlib.H>
#include <stdio.H>
#include <string.H>

void inv(char string[], int i, int f){

    char s[100];
    int j=0;

    if (f <= i){
        return;
    }

    s[j] = string[i];
    string[i] = string[f];
    string[f] = s[j];

    inv(string,i+1,f-1);

}


int main(){

    int i=0, f;
    char string[100];

    printf("-------------------------------------------\n");
    printf("DIGITE A PALAVRA A SER INVERTIDA:\n");
    fgets(string, sizeof(string), stdin);

    printf("SUA STRING: %s\n", string);

    string[strcspn(string, "\n")] = '\0';
    f = strlen(string) - 1;

    inv(string,i,f);

    printf("SUA STRING INVERTIDA: %s\n", string);

    printf("-------------------------------------------\n");

    getchar();
    return 0;
}