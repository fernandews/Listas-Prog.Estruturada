// Defina as variáveis a, b e c (tipo de dado) para obter todas as possíveis respostas para
// os valores de ‘c’:
// Suponha que:
// a = 3
// b = a / 2
// c = b + 3.1

// 1. c = 4.6

#include <stdio.h>

int main() {
    float a = 3;
    float b = a / 2;
    float c = b + 3.1;

    printf("%.2f", c);

    return 0;
}