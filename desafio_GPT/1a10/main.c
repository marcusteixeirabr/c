#include <stdio.h>
#include <stdlib.h>

int main()
{

    int inicio = 0;
    int fim = 0;
    int passo = 1;

    printf("******************************\n");
    printf("Imprimindo números no terminal\n");
    printf("******************************\n");

    printf("\nDigite o valor inicial: ");
    scanf("%d", &inicio);

    printf("\nDigite o valor final: ");
    scanf("%d", &fim);

    printf("\nDigite o passo: ");
    scanf("%d", &passo);

    passo = abs(passo);

    printf("\n");

    if (inicio == fim)
    {
        printf("%d", inicio);
    }
    else if (inicio < fim)
    {
        for (int i = inicio; i <= fim; i += passo)
        {
            printf("%d ", i);
        }
    }
    else
    {
        for (int i = inicio; i >= fim; i -= passo)
        {
            printf("%d ", i);
        }
    }

    printf("\n\nContagem encerrada!\n\n");

    return 0;
}