// Faça um programa que informe quais são os números que se repetem em
// um vetor. O programa deve seguir os seguintes passos:

// a) Leia um inteiro do usuário e aloque um vetor de inteiros
// dinamicamente com este tamanho. Depois, preencha todo o vetor de
// inteiros com valores entre 0 e 9.

// b) Imprima na tela os valores que se repetem no vetor.

// - Exemplo de execução do programa:
// > Entradas:
// tam = 9
// vet = |1|5|8|4|4|5|0|8|8|
// > Saída:
// 5, 8, 4
// - Obs.: Faça tudo na main.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int buscar_elemento(int buscar, int *v) {
    int i = 0;
    int n = 0;

    while (i == 0 &&  n < 5) {
        if (v[n]== buscar) {
            i = 1;
        }
        n++;
    }

   return i;
}

int main() {
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int *vet;
    
    vet = (int *) malloc(n * sizeof(int));

    srand(time(NULL));
    for (size_t i = 0; i < n; i++) {
        vet[i] = rand() % 10;
    }
    
    for (size_t i = 0; i < n; i++) {
        printf("%d, ", vet[i]);
    }

    printf("\n ---------------------------- \n");
    
    int x[n];
    int index = 0;
    for (size_t i = 0; i < n; i++) {
        for (size_t j = i; j < n; j++) {
            if (i != j && vet[i] == vet[j] && buscar_elemento(vet[i], x) == 0) {
                x[index] = vet[i];
                index ++;
                break;
            }
        }  
    }

    // printf("%d \n", index);
    for (size_t i = 0; i < index; i++) {
        printf("%d ", x[i]);
    }
    
    
    free(vet);

    return 0;
}