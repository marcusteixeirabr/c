#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    const char escolhas[3][8] = {
        "Pedra",
        "Papel",
        "Tesoura"
    };
    int jogador;
    int computador;
    int vitorias = 0;
    int derrotas = 0;
    int empates = 0;
    int jogarNovamente = 0;
    int respostaOK;
    char simNao;

    // inicializa o gerador de números aleatórios com base no relógio do sistema
    srand(time(NULL));

    printf("Vamos brincar de Pedra - Papel - e - Tesoura?\n\n");

    do {
        printf("Ok, vou fazer minha escolha!\n\n");
        // gera um número aleatório entre 1 e 3
        computador = rand() % 3 + 1;

        printf("Sua vez de escolher\n");
        printf("[1] Pedra\n");
        printf("[2] Papel\n");
        printf("[3] Tesoura\n");

        do {
            printf("Digite um dos número acima: ");
            scanf(" %d", &jogador);
            while (getchar() != '\n');
        } while (jogador < 1 || jogador > 3);

        if (jogador == computador) {
            printf("Empatou! ");
            empates++;
        } else {
            if (jogador == 1 && computador == 3 ||
                jogador == 2 && computador == 1 ||
                jogador == 3 && computador == 2) {
                printf("Você venceu! ");
                vitorias++;
                } else {
                    printf("Você perdeu! ");
                    derrotas++;
                }
        }
        printf("Eu escolhi %s, ", escolhas[computador - 1]);
        printf("você escolheu %s\n\n", escolhas[jogador - 1]);

        printf("-=-=- Placar -=-=-\n");
        printf("Jogador \t%d\n", vitorias);
        printf("Computador \t%d\n", derrotas);
        printf("Empates \t%d\n", empates);

        do {
            simNao = ' ';
            printf("\nQuer jogar novamente? [S/N]");
            scanf(" %c", &simNao);
            switch (simNao) {
                case 's':
                case 'S':
                    printf("Vamos continuar jogando!!!\n\n");
                    jogarNovamente = 1;
                    respostaOK = 1;
                    break;

                case 'n':
                case 'N':
                    printf("Foi muito divertido, até logo!\n");
                    jogarNovamente = 0;
                    respostaOK = 1;
                    break;

                default:
                    printf("Digite S ou N.");
                    respostaOK = 0;
            }

            while (getchar() != '\n');  // descarta tudo até o Enter

        } while (!respostaOK);

    } while (jogarNovamente);

    return 0;
}