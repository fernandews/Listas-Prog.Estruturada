#include <stdio.h>
#include <stdlib.h>

int diferenca (const void *a, const void *b) {
    return ( *(int*)a - *(int*)b );
}

int main () {
    int vet[10];
 
    for(size_t i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    qsort(vet, 10, sizeof(int), diferenca);

    printf("Valores ordenados: ");
    for(size_t i = 0; i < 10; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
  
    return 0;
}