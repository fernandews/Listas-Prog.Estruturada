// O maior divisor comum (MDC) de dois números inteiros é o maior número inteiro
// que faz uma divisão exata (com resto zero) desses dois números. Por exemplo, o MDC de
// 32 e 40 é 8, o MDC de 9 e 27 é 9 e o MDC de 13 e 25 é 1. Implemente uma função que
// receba como parâmetros dois números inteiros x e y e calcule o MDC desses números.

#include <stdio.h>

int mdc(int x, int y) {
    int resto;

    while (y != 0)
    {
        resto = x % y;
        x = y;
        y = resto;
    }
    
    return x;
};

int main()
{
    int x;
    int y;

    printf("Informe os numeros a serem usados. \n");
    printf("Menor numero: ");
    scanf("%d", &y);

    printf("Maior numero: ");
    scanf("%d", &x);

    printf("O MDC e %d", mdc(x, y));

    return 0;
}
