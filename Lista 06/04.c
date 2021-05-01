#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int* premiados(int n, int *inscr, float *t1, int p1, float *t2, int p2, int *tam) {

// calcula as médias e identifica a maior
    float media[n], maior = 0;
    for (size_t i = 0; i < n; i++) {
        media[i] = ((t1[i] * p1) + (t2[i] * p2)) / (p1 + p2);
        // printf("%.1f,  ", media[i]);

        if (media[i] > maior) {
            maior = media[i];
        }
    }

// conta as ocorrencias da maior média
    *tam = 0;
    for (size_t i = 0; i < n; i++) {
        if (media[i] == maior) {
            (*tam)++;
        }
    }

// cria um vetor alocado dinamicamente com o tamanho exato
    int *premiados;
    premiados = malloc((*tam) * sizeof(int));

    if (!premiados) {
        printf("Nao foi possivel alocar a memoria");
        return NULL;
    }

// armazena as inscrições no vetor correspondente
    int i = 0;
    for (size_t j = 0; j < n; j++) {
        if (media[j] == maior) {
            premiados[i] = inscr[j];
            i++;
        }
    }

    return premiados;
}

int main() {
// declara as variáveis
    int n = 10;
    int inscr[n];
    float t1[n], t2[n];
    int p1 = 3, p2 = 4, tam = 0;

// cria os vetores
    for (size_t i = 0; i < n; i++) {
        inscr[i] = i;
        t1[i] = rand() % 10;
        t2[i] = rand() % 10;
    }


    int* venc = premiados(n, inscr, t1, p1, t2, p2, &tam);

    for (size_t i = 0; i < tam; i++) {
        printf("Premiado final: %d ", venc[i]);
    }

    free(venc);

    return 0;
}