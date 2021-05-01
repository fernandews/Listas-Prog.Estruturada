// Escreva uma função em C que receba como parâmetro uma cadeia de caracteres,
// contendo apenas letras entre 'A' e 'Z' ou 'a' e 'z' e espaços em branco, e retorne uma
// nova cadeia -- alocada dinamicamente --, contendo uma cópia da cadeia original, mas
// sem espaços em branco no início ou no final, isto é, sem qualquer caractere ' ' (espaço)
// localizado antes da primeira letra ou depois da última letra da cadeia. Por simplificação,
// considere que a cadeia de entrada possui no mínimo uma letra (entre 'A' e 'Z' ou 'a' e
// 'z'). Por exemplo, se a cadeia “ nota do aluno ” (com três espaços em branco no início
// e dois no final) for passada para a função, a cadeia retornada deve ser “nota do aluno”,
// sem nenhum espaço no início ou no final. Se não for possível alocar dinamicamente a
// nova cadeia, a função deve retornar NULL.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char TirarVacuo( char *s ) {
    char *temp;

    int begin = 0;
    
    while (s[begin] == ' ') {
        begin++;
    }

    int end = strlen(s) - 1;
    while (s[end] == ' ') {
        end = end - 1;
    }
    
    int len = strlen(s) - begin - (strlen(s) - end - 1);
    int size = len * sizeof(char);
    temp = (char *) malloc(size);

    int index = 0;

    for (size_t i = begin; i < end + 1; i++) {
        if (isalpha(s[i]) != 0 || s[i] == ' ') {
            temp[index] = s[i];
            index = index + 1;
        }
    }

    printf("%s", temp);

    if (!temp) {
        printf("Nao foi possivel alocar a memoria");
        return NULL;
    }
    else {
        return *temp;
    }
    
    free(temp);
}

int main() {
    char str1[50];

    printf("Digite a string: ");
    gets(str1);

    TirarVacuo(str1);

    return 0;
}

