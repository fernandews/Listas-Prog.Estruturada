// Escreva um programa em C para ler um vetor R (de 5 elementos) e um vetor S (de 10
// elementos). Gere um vetor X que possua os elementos comuns a R e a S. Considere que pode
// existir repetição de elementos no mesmo vetor. Nesta situação somente uma ocorrência do
// elemento comum aos dois deve ser copiada para o vetor X. Após o término da cópia, escrever o
// vetor X.

#include <stdio.h>
#include <stdlib.h>

int buscar_elemento(int buscar, int *v) {
    int i = 0;
    int n = 0;

    while (i == 0 && n < 5) {
        if (v[n]== buscar) {
            i = 1;
        }
        n++;
    }

   return i;
}

void elementos_comuns(int *r, int *s) {
    int *p;

    int x[5];

    int count = 0;

    for (size_t i = 0; i < 10; i++) {
        for (size_t j = 0; j < 5; j++) {
            if (s[i] == r[j] && buscar_elemento(r[j], x) == 0) {
                x[count] = r[j];
                printf("%d ", x[count]);
                count++;
            }   
        }
    }

    return;
}

int main()
{
    int r[5] = {0, 1, 2, 3, 2};
    int s[10] = {1, 4, 3, 2, 4, 0, 5, 9, 1, 7};
    
    elementos_comuns(r, s);
    
    return 0;
}