#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float nota = 0, soma = 0, media = 0;
    int i = 0;

    for (i = 1; i <= 5;i++)
    {
        printf("informe sua %dª nota:",i);
        scanf("%f",&nota);


        soma += nota;
        media = soma / i;
    }
        fflush(stdin);
    printf("média: %.1f\n", media);

    return 0;
}