#include <stdio.h>
#include <stdlib.h>

int menu(const char itens[][31], int linhas);
int confirmar(const char *pergunta);

int main() {
    const float VALOR_INGRESSO = 12.50f;
    float soma = 0.0f;
    int escolha = 0;

    const char filmes[4][31] = {
        "Vingadores 4 – da Marvel",
        "Como Treinar o Seu Dragão 3",
        "Dumbo",
        "Shazam!"
    };

    do {
        system("cls || clear");

        escolha = menu(filmes, 4);
        if (escolha == 0) {
            break;
        }

        printf("\nVocê escolheu o filme \"%s\".\n", filmes[escolha - 1]);
        printf("Valor do ingresso: R$%.2f\n", VALOR_INGRESSO);


        if (confirmar("Você confirma a compra do ingresso?")) {
            soma += VALOR_INGRESSO;
            printf("✅ Compra confirmada!\n");
        } else {
            printf("❌ Compra cancelada.\n");
        }

        printf("Valor parcial: R$%.2f\n", soma);

    } while (confirmar("Você quer comprar outro ingresso?"));

    printf("\n---------------------------------\n");
    printf("Valor total da compra: R$%.2f\n", soma);
    printf("Obrigado pela sua visita, volte sempre!\n");
    printf("---------------------------------\n");
    printf("\nPressione ENTER para sair...");
    getchar();

    return 0;
}

// ------------------------------------------------------------
// Exibe o menu de filmes e lê a opção do usuário
// ------------------------------------------------------------
int menu(const char itens[][31], int linhas) {
    int opcao = -1;

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("        CINEMA PARADISO\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");

    for (int i = 0; i < linhas; i++) {
        printf("[%d] %s\n", i + 1, itens[i]);
    }
    printf("[0] Encerrar\n", linhas + 1);

    do {
        printf("Selecione o filme para compra de ingresso: ");
        if (scanf("%d", &opcao) != 1) {
            printf("\nEntrada inválida! Digite um número.\n");
            while (getchar() != '\n'); // limpa buffer
            opcao = -1;
        } else if (opcao < 0 || opcao > linhas) {
            printf("\nOpção fora do intervalo! Tente novamente.\n");
        }
    } while (opcao < 0 || opcao > linhas);

    while (getchar() != '\n'); // limpa buffer antes de retornar
    return opcao;
}

// ------------------------------------------------------------
// Pede uma confirmação [S/N] e retorna 1 (sim) ou 0 (não)
// ------------------------------------------------------------
int confirmar(const char *pergunta) {
    char resposta = ' ';
    do {
        printf("\n%s [S/N] ", pergunta);
        scanf(" %c", &resposta); // <-- o espaço ignora '\n' no buffer
        resposta = (resposta >= 'a' && resposta <= 'z') ? resposta -32 : resposta; // converte minúscula → maiúscula
        if (resposta != 'S' && resposta != 'N') {
            printf("Resposta inválida. Digite S ou N.\n");
        }
    } while (resposta != 'S' && resposta != 'N');

    return (resposta == 'S');
}
