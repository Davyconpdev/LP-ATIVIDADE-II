#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
 int main() {
 
float temperatura;

 printf("informe a temperatura externa(C�):");
 scanf("%f",&temperatura);

printf("%.1f",temperatura);

 if(temperatura > 25)  {
printf("\nClima Ensolarado.");
 } else if(temperatura < 15) {
    printf("\nClima Chuvoso.");
 } else {
    printf("\nClima Nublado.");
 }

    return 0;
 }