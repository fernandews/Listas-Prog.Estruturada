// Escreva um programa em C para ler uma palavra e escrever:
// -A primeira letra da palavra.
// -A última letra da palavra.
// -O número de letras existente na palavra (não usar a função strlen())

#include <stdio.h>
#include <string.h>

int main() {
    char w[20];

    printf("Digite uma palavra: ");
    gets(w);

    int i = 0;
    while (w[i] != '\0') {
        i++;
    }

    printf("\n--------------------\n");
    printf("Primeira letra: %c \n", w[0]);
    printf("Ultima letra: %c \n", w[strlen(w) - 1]);
    printf("Quantidade de letras: %d \n", i);

    return 0;
}