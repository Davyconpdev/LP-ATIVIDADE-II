#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float compra, valorf;
    int opcao;

    printf("Em que dia a compra foi realizada?\n");
    printf("\n 1- dias úteis");
    printf("\n 2- fim de semana");
    printf("\nescolha uma opção:");
    scanf("%d", &opcao);
    system("cls");
    printf("valor da compra:");
    scanf("%f", &compra);
    system("cls");

    switch (opcao)
    {
    case 1:
        if (compra > 100)
        {
            valorf = compra * 0.9;
            printf("valor descontado:R$%.2f\n", valorf);
        }
        else
        {
            printf("valor da compra:R$%.2f\n", compra);
        }
        break;

    case 2:
        if (compra > 100)
        {
            valorf = compra * 0.85;
            printf("valor descontado:R$%.2f\n", valorf);
        }
        else
        {
            printf("valor da compra:R$%.2f\n", compra);
            break;

        default:
            printf("opcao inválida");
            break;
        }
    }
    return 0;
}
