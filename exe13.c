#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int primeironum, segundonum, maiornum, menornum;

    printf("informe um número:");
    scanf("%d", &primeironum);
    printf("informe outro número:");
    scanf("%d", &segundonum);

    fflush(stdin);

    menornum = primeironum < segundonum ? primeironum : segundonum;
    maiornum = segundonum > primeironum ? segundonum : primeironum;

    printf("menor número:%d\n", menornum);
    printf("maior número:%d\n", maiornum);

    return 0;
}