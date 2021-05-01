#include <stdio.h>
#define MAX 10

void bubble_sort(int *a) {
    int tmp;

    for(size_t i = 0; i < MAX; i++) {
        for(size_t j = i+1; j < MAX; j++) {
            if(a[j] < a[i]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
};
 
int main() {
    int vet[MAX];
 
    for(size_t i = 0; i < MAX; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }
 
    bubble_sort(vet);

    printf("Valores ordenados: ");
    for(size_t i = 0; i < MAX; i++) {
        printf("%d ", vet[i]);
    }
    printf("\n");
 
    return 0;
}
