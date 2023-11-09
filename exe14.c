#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int numero = 0, par = 0, impar = 0, i = 0;
    float somaPar = 0, somaImpar = 0, mediaPar = 0, mediaImpar = 0;

    do
    {
        printf("digite um número:");
        scanf("%d", &numero);
        

        if (numero % 2 == 0)
        {
            par++;

            somaPar = somaPar + numero;
            
        }
        else if (numero % 2 == 1)
        {
            impar++;

            somaImpar = somaImpar + numero;
            
        }
        fflush(stdin);

    } while (numero >= 0);

    mediaPar = somaPar / par;
    mediaImpar = somaImpar / impar;


    printf("\n");
    printf("números pares: %d\n", par);
    printf("números ímpares: %d\n", impar);
    printf("\n");
    printf("média números pares: %.1f\n", mediaPar);
    printf("média números ímpares: %.1f\n", mediaImpar);

    return 0;
}