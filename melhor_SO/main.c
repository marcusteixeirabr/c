#include <stdio.h>

void exibirMenu(int pesquisa) {
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("                         Pesquisa %d\n", pesquisa);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Qual o melhor Sistema Operacional para uso em servidores?\n");
    printf("[1] Windows Server\n");
    printf("[2] Unix\n");
    printf("[3] Linux\n");
    printf("[4] Netware\n");
    printf("[5] Mac Os\n");
    printf("[6] Outro\n");
    printf("[0] Encerrar pesquisa\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
}


void apresentarEstatistica(
    const int windows,
    const int unix,
    const int linux,
    const int netware,
    const int macos,
    const int outro,
    const int pesquisa) {
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("                   Resultado da Pesquisa\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("Pessoas entrevistadas: %d\n", pesquisa);
    printf("Windows Server\t%.1f%%\n", (windows*100.0)/pesquisa);
    printf("Unix\t\t%.1f%%\n", (unix*100.0)/pesquisa);
    printf("linux\t\t%.1f%%\n", (linux*100.0)/pesquisa);
    printf("Netware\t\t%.1f%%\n", (netware*100.0)/pesquisa);
    printf("Mac OS\t\t%.1f%%\n", (macos*100.0)/pesquisa);
    printf("Outro\t\t%.1f%%\n", (outro*100.0)/pesquisa);
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

}


int main(void) {
    int opcao,
        pesquisa = 0,
        windows = 0,
        unix = 0,
        linux = 0,
        netware = 0,
        macos = 0,
        outro   = 0;

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    printf("                     Pesquisa DATAVALI\n");


    exibirMenu(pesquisa + 1);

    do {
        scanf("%d", &opcao);
        switch (opcao) {
            case 1: {
                windows++;
                break;
            }
            case 2: {
                unix++;
                break;
            }
            case 3: {
                linux++;
                break;
            }
            case 4: {
                netware++;
                break;
            }
            case 5: {
                macos++;
                break;
            }
            case 6: {
                outro++;
                break;
            }
            case 0: {
                apresentarEstatistica(windows, unix, linux, netware, macos, outro, pesquisa);
                printf("\nObrigado por participar da pesquisa!\n");
                return 0;
            }
            default: {
                printf("Opção fora do limite (0 - 6). Tente novamente!\n");
                continue;
            }
        }
        pesquisa++;
        exibirMenu(pesquisa + 1);
        while(getchar() != '\n');
    } while (opcao != 0);
    return 0;
}