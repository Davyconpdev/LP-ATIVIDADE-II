#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
 int main() {
 
int idade;

 printf("informe sua idade:");
 scanf("%d",&idade);

 if(idade >= 18) {
printf("\nAcessso permitido.");
 } else {
    printf("\nAcessso negado.");
 }

    return 0;
 }