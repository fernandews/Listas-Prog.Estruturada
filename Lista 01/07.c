// Faça operações de arredondamento para cima e para baixo com números float. Dica:
// Pesquise o documento “Cartão de Referência da Linguagem C” para encontrar quais
// funções devem ser usadas no programa.

#include <stdio.h>
#include <math.h>

int main () {
    float num;

    printf("Informe o número desejado: ");
    scanf("%f", &num);

    float ceil = ceilf(num);
    printf("Arredondando para cima, temos %.2f \n", ceil);

    float floor = floorf(num);
    printf("Arredondando para baixo, temos %.2f", floor);

    return 0;
}