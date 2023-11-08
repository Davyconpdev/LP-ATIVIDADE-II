#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int senha;

    printf("\ndigite o código de acesso:\n");
    scanf("%d", &senha);

    while (senha != 20237)
    {
        printf("\nsenha inválida.");
        printf("\ndigite novamente o código de acesso:\n");
        scanf("%d", &senha);
    system("cls");
    }
    printf("Acesso permitido.");

    return 0;
}
