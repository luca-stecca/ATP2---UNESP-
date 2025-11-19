#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* questao1(char str1[], char str2[]){

    char str3[20];
    int i=0, j=0;

    while(str1[i] != '\0'){
        str3[i] = str1[i];
        i++;
    }

    while(str2[j] != '\0'){
        str3[i] = str2[j];
        i++;
        j++;
    }

}
