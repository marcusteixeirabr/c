#include <stdio.h>

// Soma todos os números de 1 a N
int main()
{

    int soma = 0;
    int n = 1;

    printf("=====================================\n");
    printf("Cálculo da soma dos números de 1 a N\n");
    printf("=====================================\n");

    printf("\nDigite um número inteiro positivo N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        soma += i;
    }

    printf("\nA soma dos números de 1 a %d é: %d\n\n", n, soma);

    return 0;
}