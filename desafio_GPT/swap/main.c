#include <stdio.h>

// Troca valores de duas variáveis
int main() {

//declara as variáveis
int numA, numB, temp;

// Entra valor da primeira variável
printf("Digite o valor A: ");
scanf("%d", &numA);

// Entra a segunda variável
printf("Digite o valor B: ");
scanf("%d", &numB);

// Troca os valores usando uma variável temporária
temp = numA;
numA = numB;
numB = temp;

// impreime novos valores das variáveis
printf("O novo valor de A é %d\n", numA);
printf("O novo valor de B é %d\n", numB);

    return 0;
}