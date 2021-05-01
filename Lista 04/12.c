// Faça um programa que receba uma string do usuário (máx. 20 caracteres) e um caracter
// qualquer. O programa deve remover todas as ocorrências do caracter da string e mostrar o
// resultado.

#include <stdio.h>
#include <string.h>

int main() {
    char str[21];
    char c;

    printf("String: ");
    gets(str);

    printf("Caractere: ");
    scanf("%c", &c);

    int len = strlen(str);
    char out[len];
    int count = 0;

    for (size_t i = 0; i < len; i++) {
        if (str[i] != c) {
            out[count] = str[i];
            count = count + 1;
        }
    }

    printf("%s", out);
    
    return 0;
}