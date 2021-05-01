// Escreva um programa que sorteie uma letra do alfabeto de ‘a’ a ‘z’ e o usuário é
// perguntado qual é essa letra. O programa deve informar se a letra é maior ou menor e
// quando o usuário a acertou.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// o alfabeto
    char letters[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int find_guess (char guess) {
    int control;

    for (size_t i = 0; i < 26; i++) {
        if (letters[i] == guess) {
            control = i;
        };
    };

    return control;
}

int main () {
// gerando um número aleatório e associando à letra
    srand(time(NULL)); 
    int num = rand() % 26;
    char right = letters[num];

// recolhendo o palpite do usuário
    char guess;
    printf("Qual o seu palpite? ");
    scanf("%c", &guess);

    while (num != find_guess(guess))
    {
        if (num > find_guess(guess)) {
            printf("A letra correta esta depois dessa. Tente novamente: ");
        }
        else
        {
            printf("A letra correta esta antes dessa. Tente novamente: ");
        };

        scanf(" %c", &guess);
    }
    
    printf("Voce acertou!");
  
    return 0;
}