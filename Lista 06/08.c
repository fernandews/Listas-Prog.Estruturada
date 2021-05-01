
// A sua função 'repeticao' agora alocará um novo vetor de inteiros
// dinamicamente que deverá ser preenchido com os valores que se repetem.
// O tamanho desse vetor deve ser gravado na variável n, que referencia
// uma variável na main (crie uma variável na main para isso). A função
// 'repeticao' retornará para a main este novo vetor resposta.
// c) Imprima na main o vetor retornado pela função 'repeticao'.

// - Exemplo de execução do programa:
// > Entradas:
// tam = 9
// vet = |1|5|8|4|4|5|0|8|8|
// > Valores contidos nas variáveis após a execução da função 'repeticao'
// (não devem ser exibidos):
// n = 3
// resposta = |5|8|4|
// > Saída:
// 5, 8, 4

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

int *repeticoes(int *vet, int tam, int *n) {
    int *x;
    x = malloc((tam) * sizeof(int));

    *n = 0;
    for (size_t i = 0; i < tam; i++) {
        for (size_t j = i; j < tam; j++) {
            if (i != j && vet[i] == vet[j] && buscar_elemento(vet[i], x) == 0) {
                x[*n] = vet[i];
                (*n)++;
                break;
            }
        }  
    }

    return x;
}

int main() {
    int n;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &n);

    int *vet;
    int qtt;
    
    vet = (int *) malloc(n * sizeof(int));

    srand(time(NULL));
    for (size_t i = 0; i < n; i++) {
        vet[i] = rand() % 10;
    }
    
    for (size_t i = 0; i < n; i++) {
        printf("%d | ", vet[i]);
    }

    printf("\n ---------------------------- \n");
    
    int* iguais = repeticoes(vet, n, &qtt);

    // printf("%d resultados \n", qtt);
    for (size_t i = 0; i < qtt; i++) {
        printf("%d ", iguais[i]);
    }
    
    free(vet);
    free(iguais);

    return 0;
}