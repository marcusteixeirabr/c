#include <stdio.h>
#include <stdlib.h>

int main()
{
    char resposta = 0;
    int opcao = 0;
    printf("Digite um número: ");
    scanf("%c", &resposta);
    printf("A resposta foi: '%c'\n", resposta);
    opcao = resposta - '0';
    printf("Se transformar para int temos: %d\n", opcao);
    if ((int) resposta - '0' == 1) {
        printf("A condição funcionou pq vc digitou '1'\n");
    }
}
