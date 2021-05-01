// Escreva um programa em C para ler um vetor X de 10 elementos inteiros. Logo após copie os
// elementos do vetor X para um vetor Y fazendo com que o 1o. elemento de X seja copiado para o
// 10o. de Y, o 2o. de X para o 9o. de Y e assim sucessivamente. Após o término da cópia, imprimir o
// vetor Y.

#include <stdio.h>

int main() {
    int x[10];
    int vet[10];

    for (size_t i = 0; i < 10; i++) {
        printf("Informe o %d valor: ", i + 1);
        scanf("%d", &x[i]);
    };

    for (size_t i = 0; i < 10; i++) {
        vet[i] = x[9 - i];
    };

    for (size_t i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    };
    
    return 0;
}