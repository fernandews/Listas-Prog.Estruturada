// Fazer um programa para receber um número inteiro de segundos do usuário e imprimir
// a quantidade correspondente em horas, minutos e segundos.

#include <stdio.h>

int main () {
    // declarando variáveis
    int secInput;
    int hor;
    int min;
    int sec;

    printf("Informe a quantidade de segundos: ");
    scanf("%i", &secInput);

    // calculando...
    hor = secInput / 3600;
    min = (secInput % 3600) / 60;
    sec = secInput % 60;

    // imprimindo o resultado
    printf("%02d:%02d:%02d", hor, min, sec);

    return 0;
}