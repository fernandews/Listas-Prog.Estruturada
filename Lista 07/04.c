// Escreva um programa para declarar um vetor de caracteres de tamanho 26 e imprimir o
// seu conteúdo. O vetor deve ser inicializado com as letras minúsculas do alfabeto. A
// inicialização do vetor e a sua impressão devem ser feitas por funções.

#include <stdio.h>
#include <string.h>

void iniciar(char *alph) {
    char c;

    for (size_t i = 0; i < 26; i++) {
        c = 97 + i;
        alph[i] = c;
    }
    
    return;
}

void imprimir(char *alph) {
    for (size_t i = 0; i < 26; i++) {
        printf("%c ", alph[i]);
    };

    return;
}

int main() {
    char alph[26];

    iniciar(alph);
    imprimir(alph);

    return 0;
}