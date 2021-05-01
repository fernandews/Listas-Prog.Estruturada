// Faça um programa que calcule e imprima a soma dos n primeiros números naturais
// ímpares. O usuário do programa deve fornecer quantos números devem ser somados.

#include <stdio.h>

int main() {
    int n;
    int sum = 0;

    printf("Informe a quantidade de numeros: ");
    scanf("%d", &n);

    for (size_t i = 0; i < n + 1; i++) {
        sum = sum + i;
    };

    printf("A soma e %d", sum);

    return 0;
}