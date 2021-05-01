// A cadeia que representa a parte local de um endereço de e-mail Hotmail válido (aquela parte
// que vem à esquerda do “@”)

// tem no máximo 64 caracteres 
// pode conter apenas letras (‘a’ a ‘z’) e números (‘0’ a ‘9’), e os caracteres ponto (‘.’), hífen (‘-’) e sublinhado (‘_’)
// Quaisquer outros caracteres especiais ou letras acentuadas não são permitidos
// deve conter no mínimo duas letras ou números
// seu primeiro caractere tem que ser necessariamente uma letra, e
// o caractere ponto (“.”) não pode aparecer em sequência ou ser o último da cadeia.

// Escreva uma função em C que receba como parâmetros a cadeia s, representando
// a parte local de um endereço de e-mail, e retorne 1 se a cadeia for válida de acordo com as
// condições descritas, ou 0, se for inválida. A função deve ter o seguinte protótipo:

int valida_mail(char *s);

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int valida_mail(char *s) {
    int count = 1;
    int isvalid = 1;

    if (isalpha(s[0]) != 0 && s[strlen(s) - 1] != '.') { 

        for (size_t i = 1; i < strlen(s); i++) {
            if (s[i] != ' ') {
                if (isalnum(s[i]) != 0) { 
                    count ++;
                }
                else if (( s[i] == '.' && s[i + 1] != '.' ) || s[i] == '-' || s[i] == '_') {
                    continue;
                }
                else {
                    isvalid = 0;
                }
            }
            else {
                isvalid = 0;
            }
        }
    }

    if (count >= 2) {
       return isvalid;
    }
    else {
        return 0;
    }
}

int main () {
    // tem no máximo 64 caracteres
    char email[65];

    printf("Informe seu e-mail: ");
    gets(email);
    
    printf("%d", valida_mail(email));

    return 0;
}