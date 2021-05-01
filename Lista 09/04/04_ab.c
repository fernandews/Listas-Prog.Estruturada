#define MAX 4
#define MAXNOME 31
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void atribui(char **nomes, int indice, char *nome) {
    nomes[indice] = nome;
};

char *get_sobrenome(char *nome) {
    int count = 0;
    char *sobrenome;
    sobrenome = (char *) malloc((strlen(nome)) * sizeof(char));

    for (size_t i = 0; i < strlen(nome); i++) {
        if (nome[i] == ' ') {
            sobrenome = (char *) realloc(sobrenome, (strlen(nome) - i - 1) * sizeof(char *));

            for (size_t j = i + 1; j < strlen(nome); j++) {
                sobrenome[count] = nome[j];
                count++;
            }
            break;
        }
    }

    return sobrenome;
}

int main() {
    char **nomes;
    char *sobrenome;
    nomes = (char **) malloc(MAX*sizeof(char *));

    for (size_t i=0 ; i<MAX ; i++) {
        nomes[i] = (char *) malloc(sizeof(char)*MAXNOME);
    }

    atribui(nomes, 0, "Fulano Silva");
    atribui(nomes, 1, "Maria do Carmo");
    atribui(nomes, 2, "Beltrano Belmonte");
    atribui(nomes, 3, "Pedro dos Santos");

    // for (size_t i = 0; i < MAX; i++) {
    //     printf("%s \n", nomes[i]);
    // }
    
    for (size_t i = 0 ; i < MAX ; i++) {
        sobrenome = get_sobrenome(nomes[i]);
        printf("%s \n", sobrenome);
        printf("%d \n",strlen(sobrenome) > 5? i : 0); // 2o printf
    }

    printf("\n%c", nomes[0][3]); // 3o printf

    return 0;
}