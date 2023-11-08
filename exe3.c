#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
 int main() {
 setlocale(LC_ALL,"portuguese");
 
float nota;

 printf("informe sua nota:");
 scanf("%f",&nota);

 if(nota >= 9) {
printf("\nExcelente.");
 } else if(nota >= 7) {
    printf("\nBom.");
 } else if(nota >= 5) {
    printf("\nRazoável.");
 } else {
    printf("Insuficiente");
 }

    return 0;
 }