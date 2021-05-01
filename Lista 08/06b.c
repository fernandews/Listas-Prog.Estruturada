// Vamos supor que várias pedras do jogo de xadrez estão no tabuleiro. Para facilitar a
// indicação das peças, vamos convencionar:
// 1 – peões 3 – torres 5 – reis 0 – ausência de peças
// 2 – cavalos 4 – bispos 6 – rainhas
// O tabuleiro é o seguinte:

// 1 3 0 5 4 0 2 1
// 1 0 1 0 0 1 0 0
// 0 0 0 0 1 0 6 0
// 1 0 0 1 1 0 0 1
// 0 1 0 4 0 0 1 0
// 0 0 3 1 0 0 1 1
// 1 0 6 6 0 0 1 0
// 1 0 5 0 1 1 0 6

// a) Construa um programa que determine a soma total de peões e bispos e a quantidade
// de posições com ausência de peças;
// b) Escreva outro programa que determine qual a quantidade de cada tipo de peça no
// tabuleiro.

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

    for (size_t i = 1; i < 7; i++) {
        printf("Qtt de %d: %d \n", i, count(tabuleiro, i));
    }
    
    return 0;
}