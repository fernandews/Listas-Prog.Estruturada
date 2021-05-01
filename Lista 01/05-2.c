// Defina as variáveis a, b e c (tipo de dado) para obter todas as possíveis respostas para
// os valores de ‘c’:
// Suponha que:
// a = 3
// b = a / 2
// c = b + 3.1

// 2. c = 4.1

#include <stdio.h>

int main() {
    int a = 3;
    int b = a / 2;
    float c = b + 3.1;

    printf("%.2f", c);

    return 0;
}