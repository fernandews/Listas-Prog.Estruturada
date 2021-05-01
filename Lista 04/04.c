// Implemente uma função que receba como parâmetros um vetor de números inteiros v e seu
// comprimento n, e verifique se os elementos do vetor correspondem aos termos de uma PA
// (Progressão Aritmética), isto é, se existe um número inteiro k tal que v[i]=v[0]+k*i. Caso os
// elementos do vetor correspondam aos termos de uma PA, a função deve retornar o valor
// calculado para k. Por exemplo, se for passado para essa função o vetor {2,10,18,26,34} a função
// deve retornar o valor 8. Caso o vetor não corresponda a uma PA, a função deve retornar o valor 0.
// Assuma que o vetor sempre terá pelo menos 3 elementos. Essa função deve ter o seguinte
// protótipo:
// int testa_PA(int n, int* v)

#include <stdio.h>

int testa_PA (int n, int* v) {
    int k = v[1] - v[0];

    for (size_t i = 0; i < n; i++) {
        if (v[i] != v[0] + k * i && k != 0) {
            k = 0;
        }
    }

    return k;
};

int main() {
    int n = 0;

    while (n < 3) {
        printf("Informe a quantidade de numeros: ");
        scanf("%d", &n);
    };

    int vet[n];
    
    for (size_t i = 0; i < n; i++) {
        printf("Informe o %d valor: ", i + 1);
        scanf("%d", &vet[i]);
    };

    int k = testa_PA(n, vet);

    if (k == 0) {
        printf("A sequencia de numeros nao e uma PA.");
    }
    else {
        printf("A razao dessa PA e: %d.", k);
    }

    return 0;
};