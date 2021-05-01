// a) Construa um programa que determine a soma total de peões e bispos e a quantidade
// de posições com ausência de peças;

#include <stdio.h>

int count(int mat[8][8], int cmp) {
    int count = 0;

    for (size_t i = 0; i < 8; i++) {
        for (size_t j = 0; j < 8; j++) {
            if(mat[i][j] == cmp) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    int tabuleiro[8][8] = {
        {1, 3, 0, 5, 4, 0, 2, 1},
        {1, 0, 1, 0, 0, 1, 0, 0},
        {0, 0, 0, 0, 1, 0, 6, 0},
        {1, 0, 0, 1, 1, 0, 0, 1},
        {0, 1, 0, 4, 0, 0, 1, 0},
        {0, 0, 3, 1, 0, 0, 1, 1},
        {1, 0, 6, 6, 0, 0, 1, 0},
        {1, 0, 5, 0, 1, 1, 0, 6}
    };

    int soma = count(tabuleiro, 1) + count(tabuleiro, 4);
    int ausencia = count(tabuleiro, 0);

    printf("Soma de peoes e bispos: %d \nAusencia de pecas: %d", soma, ausencia);
    return 0;
}