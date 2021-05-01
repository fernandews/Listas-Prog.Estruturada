// Um cinema que possui capacidade de 100 lugares está quase sempre lotado. Certo dia cada
// espectador respondeu a um questionário, onde constava:
// - sua idade;
// - sua opinião em relação ao filme, que podia ser: ótimo, bom, regular, ruim ou péssimo.
// Elabore um programa que, recebendo estes dados calcule em funções e mostre:
// a. a quantidade de respostas ótimo;
// b. a diferença percentual entre respostas bom e regular;
// c. a média de idade das pessoas que responderam ruim;
// d. a porcentagem de respostas péssimo e a maior idade que utilizou esta opção;
// e. a diferença de idade entre a maior idade que respondeu ótimo e a maior idade que respondeu
// ruim.

#include <stdio.h>

int count_o (int *opt) {
    int count = 0;

    for (size_t i = 0; i < 10; i++) {
        if (opt[i] == 1) {
            count = count + 1;
        } 
    }

    return count;
}

float dif_br (int *opt) {
    // variação percentual = (final / inicial -1) * 100
    int b = 0;
    int r = 0;

    // contanto respostas "bom"
    for (size_t i = 0; i < 10; i++) {
        if (opt[i] == 2) {
            b = b + 1;
        } 
    }

    // contanto respostas "regular"
    for (size_t i = 0; i < 10; i++) {
        if (opt[i] == 3) {
            r = r + 1;
        } 
    }

    float vp = (b  / r - 1) * 100;

    return vp;
}

float media_r (int *opt, int *age) {
    int sum = 0;
    int count = 0;

    for (size_t i = 0; i < 10; i++) {
        if (opt[i] == 4) {
            sum = sum + age[i];
            count = count + 1;
        } 
    }

    float media = sum / count;

    return media;    
}

float porc_p (int *opt) {
    int count = 0;

    for (size_t i = 0; i < 10; i++) {
        if (opt[i] == 5) {
            count = count + 1;
        } 
    }

    float porc = 100 * count / 100;

    return porc;
}

int maior_idade (int *opt, int *age, int a) {
    int maior = 0;

    for (size_t i = 0; i < 10; i++) {
        if (opt[i] == a) {
            if (age[i] > maior) {
                maior = age[i];
            }   
        }    
    }

    return maior;
}

int main() {
    int idade[10], op[10];

// coletando dados
    for (size_t i = 0; i < 10; i++) {
        printf("\nInforme sua idade: ");
        scanf("%d", &idade[i]);

        printf("O que voce achou do cinema? \n--------------------------- \n[01] Otimo \n[02] Bom \n[03] Regular \n[04] Ruim \n[05] Pessimo \n");
        printf("Sua resposta: ");
        scanf("%d", &op[i]);
    }

// chamadas de função
    printf("Quantidade de respostas 'otimo': %d \n", count_o(op));
    printf("Variacao percentual entre 'bom' e 'regular': %f. \n", dif_br(op));
    printf("Media de idade dos que responderam 'ruim': %.2f \n", media_r(op, idade));
    printf("Porcentagem de respostas 'pessimo': %f \n", porc_p(op));
    printf("Maior idade de quem respondeu 'pessimo': %d \n", maior_idade(op, idade, 5));
    printf("Diferenca de idade entre maior 'otimo' e maior 'ruim': %d", maior_idade(op, idade, 1) - maior_idade(op, idade, 4));

    return 0;
}