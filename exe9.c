#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero, i;

    printf("insira um número:");
    scanf("%d", &numero);

    if (numero <= 1)
    {
        printf("Não é primo.");
    }
    else
    {
        for (i = 2; i < numero; i++)
        {
            if (numero % i == 0)
            {
                printf("Não é primo.");
                break;
            }
        }
        if (i == numero)
        {
            printf("É primo.");
        }
    }
    return 0;
}
