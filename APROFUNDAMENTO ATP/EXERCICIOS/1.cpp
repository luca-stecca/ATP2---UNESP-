#include <stdio.h>
#include <string.h>

int main(){

   char string[100];
   int tamanho;

   printf("DIGITE SUA STRING: ");
   fgets(string, sizeof(string), stdin);
   tamanho = strlen(string);

   printf("SUA STRING TEM %d CARACTERES", tamanho);
}