#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
 int main() {
 setlocale(LC_ALL,"portuguese");

int opcao;


printf("1-Inglês.");
printf("2-Espanhol.");
printf("3-Francês.");
printf("\n");
 printf("\nescolha um idioma:");
 scanf("%d",&opcao);
 system("cls");

 switch (opcao)
 {
 case 1:
    printf("Welcome!");
    break;
    case 2:
printf("Bienvenido!");
break;
    case 3:
   printf("Accueillir!");
   break; 
 } 
 return 0;
 }