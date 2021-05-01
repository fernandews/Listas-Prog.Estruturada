// Inicialize um vetor de inteiros aleatoriamente e percorra o vetor usando dois ponteiros : um
// começando do início do vetor e outro do final até se encontrarem no meio. Obs : O vetor deve
// conter um número par de elementos.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int *r, *s;
    int vet[10];
    srand(time(NULL)); 

    for (size_t i = 0; i < 10; i++) {
        vet[i] = rand();
    }

    for (size_t i = 0; i < 5; i++) {
        r = &vet[i];
        s = &vet[10 - i];
    }
    
    return 0;
}