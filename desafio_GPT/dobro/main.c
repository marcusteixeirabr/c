// desafio_GPT/dobro/main.c
// Programa que lê um número e imprime o seu dobro

#include <stdio.h> // Inclusão da biblioteca padrão de entrada e saída

int main() { // Função principal do programa

    // Declaração da variável para armazenar o número inserido pelo usuário
    int numero;

    // Solicita ao usuário que insira um número
    printf("Digite um número para ver o seu valor miltiplicado por 2: ");

    // Lê o número inserido pelo usuário
    scanf("%d", &numero);

    // Calcula o dobro do número e imprime o resultado
    numero *= 2;

    // Exibe o resultado na tela
    printf("O dobro do número digitado é: %d\n", numero); 

    return 0; // Indica que o programa terminou com sucesso
}