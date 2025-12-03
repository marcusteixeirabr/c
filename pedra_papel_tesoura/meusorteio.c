#include <stdlib.h> // rand(), srand()
#include <time.h>   // time()
#include "meusorteio.h" // inclui o header da própria biblioteca

int sorteio(int min, int max) {
    // inicializa o gerador de números aleatórios com base no relógio do sistema
    srand(time(NULL));
    // retorna um número aleatório entre min e max
    return rand() % (max - min + 1) + min;
}