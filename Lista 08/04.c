// Implemente um programa que leia do usuário vários nomes completos de pessoas,
// até que o usuário digite a palavra “fim”. Esses nomes devem ser armazenados em um
// nomes. Imprima no final a média e a variância do tamanho dos nomes.

#include <stdio.h>
#include <string.h>

int main() {
    char nomes[25][50];
    int logic = 0, count = 0, soma = 0;

    while (logic != 1) {
        printf("Informe o %d nome: ", count + 1);
        gets(nomes[count]);

        if (strcmp(nomes[count], "fim") == 0 || strcmp(nomes[count], "Fim") == 0) {
            logic = 1;
        }
        else {
            soma += strlen(nomes[count]);
            count++;
        }
    }

    float media = soma / count;
    float variancia = 0;

    printf("Media: %.2f \n", media);

    for(size_t i = 0; i<= (count - 1); i++) {
        variancia += ((strlen(nomes[i]) - media) * (strlen(nomes[i]) - media));
    }

    variancia = variancia / (count - 1);

    printf("Variancia: %.2f", variancia);
    
    return 0;
}