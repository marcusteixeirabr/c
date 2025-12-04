#include <stdio.h>

// Verifica se o número é par ou ímpar

int main() {

    // Declara as variáveis
    int numero;

    // Entra com o número a ser verificado
    printf("Digite um numero para saber se ele é par ou se é ímpar: ");
    scanf("%d", &numero);
        
    // Verifica se o número é par
    if (numero % 2 == 0) {
        printf("O número %d é PAR\n", numero);
    } else {
        printf("O número %d é ÍMPAR\n", numero);
    }


    return 0;
}