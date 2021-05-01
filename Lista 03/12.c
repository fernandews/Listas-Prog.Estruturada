// Fazer um programa para receber uma frase do usuário, caracter a caracter usando getch() e
// armazenando no vetor (máx. 80 caracteres). Quando o usuário digita enter (‘\r’) a recepção é
// finalizada. Mostrar cada palavra da frase em uma linha separada.

#include <stdio.h>
#include <conio.h>

int main() {
    char frase[80];

// recebendo a frase de no máx 80 caracteres
    printf("Digite algo: ");

    for (size_t i = 0; i < 80; i++) {
        frase[i] = _getche();

        if (frase[i] == '\r') {
            break;
        }  
    }

    printf("\n ---------- \n");
    
//  imprimindo a frase
    for (size_t i = 0; i < 80; i++) {
        if (frase[i] == ' ') {
            frase[i] = '\n';
        }
    }

    printf("%s", frase);

    return 0;
}