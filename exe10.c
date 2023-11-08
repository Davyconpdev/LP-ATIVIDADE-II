#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    float primeironum, segundonum, resultado;
    char opcao;

    printf("\ndigite um número:\n");
    scanf("%f", &primeironum);
    printf("\ndigite outro número:\n");
    scanf("%f", &segundonum);

    fflush(stdin);

    printf("* / + -:");
    printf("Escolha a operação:");
    scanf("%c",&opcao);

    switch (opcao)
    {
    case '*':
        resultado = primeironum * segundonum;
        break;
    case '/':
        resultado = primeironum / segundonum;
        break;
    case '+':
        resultado = primeironum + segundonum;
        break;
    case '-':
        resultado = primeironum - segundonum;
        break;
    }
    printf("resultado:%.1f\n", resultado);

    return 0;
}