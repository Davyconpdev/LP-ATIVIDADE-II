#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
 
 int main() {
 setlocale(LC_ALL,"portuguese");
 
int opcao;


printf("1- Novo jogo.");
printf("\n2- Carregar jogo.");
printf("\n3- Configurações.");
printf("\n");
 printf("\nescolha uma opção:");
 scanf("%d",&opcao);
 system("cls");

 switch (opcao)
 {
 case 1:
    printf("Novo Jogo.");
    break;
    case 2:
printf("Carregando Jogo...");
break;
    case 3:
   printf("Configurando.");
   break; 
 } 
 return 0;
 }