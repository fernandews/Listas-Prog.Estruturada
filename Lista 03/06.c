// Implemente a função maiores, que recebe como parâmetro um vetor de números inteiros (vet) de
// tamanho n e um valor x. A função deve retornar quantos números maiores do que x existem nesse
// vetor. Essa função deve obedecer ao protótipo:
// int maiores(int n, int * vet, int x);

#include <stdio.h>
#include <stdlib.h>

int maiores(int n, int *vet, int x) {
    int count = 0;

    for (size_t i = 0; i < n; i++) {
        if (vet[i] > x) {
            count = count + 1;
        }
    }

    return count;
}

int main() {
    int n = 5;
    int vet[5];
    int x;

// gerando um vetor de inteiros aleatórios
    printf("Escolha 5 numeros para fazer parte do vetor: ");

    for (int i = 0; i < 5; i++) {
        scanf ("%d", &vet[i]);
    };

    //  atribuindo valor a x
    printf("Escolha um numero para fazer a comparacao: ");
    scanf("%d", &x);

    printf("%d maiores", maiores(n, vet, x));

    return 0;
}