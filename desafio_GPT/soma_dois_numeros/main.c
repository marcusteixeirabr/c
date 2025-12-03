// desafio_GPT/soma_dois_numeros/main.c
// Programa que lê dois números e imprime a soma deles

#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída

int main() {  // Função principal do programa

    // Declaração das variáveis para armazenar os números inseridos pelo usuário
    int numero1, numero2, soma;

    // Solicita ao usuário que insira o primeiro número
    printf("Digite o primeiro número: ");

    // Lê o primeiro número inserido pelo usuário
    scanf("%d", &numero1);

    // Solicita ao usuário que insira o segundo número
    printf("Digite o segundo número: ");

    // Lê o segundo número inserido pelo usuário
    scanf("%d", &numero2);

    // Calcula a soma dos dois números
    soma = numero1 + numero2;

    // Exibe o resultado na tela
    printf("A soma dos dois números digitados é: %d\n", soma);

    return 0; // Indica que o programa terminou com sucesso
}