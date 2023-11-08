#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>
 
 int main() {
 setlocale(LC_ALL,"portuguese");
 
 int num, i = 0;


 printf("insira um número:");
 scanf("%d",&num);

   for (i = num; i >= 0; i--)
 {
    printf("%d\n",i);
 }
  
return 0;
 }

 