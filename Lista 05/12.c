// Fazer um programa para receber uma string do usuário (máx. 50 caracteres) e fazer uma
// estatística dos caracteres digitados. Por exemplo, para a string "O EXERCICIO E FACIL"”, a
// estatística mostrada será 'O' = 2, ' '=3, 'E' = 3, 'X' = 1, 'R' = 1, 'C' = 3, 'I' = 3, 'F' = 1, 'A' = 1, 'L' = 1

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[51];
    char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int qtts[26];

    printf("Digite algo: ");
    gets(str);

    int count = 0;
    for (size_t i = 0; i < 26; i++) {
        for (size_t j = 0; j < strlen(str); j++) {
            if (toupper(str[j]) == alpha[i]) {
                count++;
            }
        }
        
        qtts[i] = count;
        count = 0;
    }

    for (size_t i = 0; i < 26; i++) {
        if (qtts[i] != 0) {
            printf("%c, %d \n", alpha[i], qtts[i]);
        }
    }
    
    return 0;
}