// Fazer um programa que sorteie um número de 0 a 100 e que permita que o usuário
// (sem conhecer o número sorteado) tente acertar. Caso não acerte, o programa deve
// imprimir uma mensagem informando se o número sorteado é maior ou menor que a
// tentativa feita. Ao acertar o número, o programa deve imprimir a quantidade de tentativas
// feitas.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // gerando um número aleatório
    srand(time(NULL)); 
    int num = rand() % 101;

    // recolhendo o palpite do usuário
    int guess;
    printf("Qual o seu palpite? ");
    scanf("%d", &guess);

    // contando tentativas
    int count = 1;

    while (num != guess)
    {
        if (num > guess) {
            printf("O numero correto e maior. Tente novamente: ");
        }
        else
        {
            printf("O numero correto e menor. Tente novamente: ");
        };
        count++; 

        scanf("%d", &guess);
    }

    printf("Voce acertou em %d tentativas!", count);
    
    return 0;
}