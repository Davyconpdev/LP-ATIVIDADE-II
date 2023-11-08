#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
 
 int main() {
 setlocale(LC_ALL,"portuguese");
 
int opcao;


printf("1- Camiseta.");
printf("\n2- Calça.");
printf("\n3- Sapato.");
printf("\n");
 printf("\ninsira o código do produto:");
 scanf("%d",&opcao);
 system("cls");

 switch (opcao)
 {
 case 1:
    printf("Camiseta: R$27,00");
    break;
    case 2:
printf("Calça: R$29,00");
break;
    case 3:
   printf("Sapato: R$50,00");
   break; 
 } 
 return 0;
 }