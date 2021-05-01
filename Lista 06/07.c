#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>


void repeticao(int *vet, int tam)
{
    for (size_t i = 0; i < tam; i++) {
        printf("%d, ", vet[i]);
    }

    printf("\n ---------------------------- \n");
    
    for (size_t i = 0; i < tam; i++) {
        for (size_t j = i; j < tam; j++) {
            if (i != j && vet[i] == vet[j]) {
                printf("%d ", vet[i]);
                break;
            }
        }  
    }
}


int main() 
{
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int *vet;
    
    vet = (int *) malloc(n * sizeof(int));

    srand(time(NULL));
    for (size_t i = 0; i < n; i++) {
        vet[i] = rand() % 10;
    }
        

    repeticao(vet, n);

    free(vet);

    return 0;
}