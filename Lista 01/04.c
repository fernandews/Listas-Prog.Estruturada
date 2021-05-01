// Um funcionário da UFF precisa validar as notas de 3 provas fornecidas por um
// professor e indicar: a média, se está aprovado/reprovado e se tem direito de realizar a VS.
// Inicialmente, faça um programa que recebe como entrada as 3 notas e mostre os
// resultados solicitados. Posteriormente, coloque o código de cálculo da média em uma
// função. Em um passo seguinte, realize os controles necessários para não receber notas
// inválidas.

#include <stdio.h>

int calculaMedia(float a, float b, float c) {
    
// calcular e informar média
    float media = (a + b + c) / 3;
    printf("\nMedia: %.2f \n", media);

    return media;
};

int main() {
    float a, b, c;

// obter notas
    printf("Insira a primeira nota: ");
    scanf("%f", &a);
    while (a < 0 || a > 10) {
        printf("Por favor, insira apenas notas de 0 a 10. \nInsira a primeira nota: ");
        scanf("%f", &a);
    };

    printf("Insira a segunda nota: ");
    scanf("%f", &b);
    while (b < 0 || b > 10) {
        printf("Por favor, insira apenas notas de 0 a 10. \nInsira a segunda nota: ");
        scanf("%f", &b);
    };

    printf("Insira a terceira nota: ");
    scanf("%f", &c);
    while (c < 0 || c > 10) {
        printf("Por favor, insira apenas notas de 0 a 10. \nInsira a terceira nota: ");
        scanf("%f", &c);
    };

// chama a função de calcular a média e recebe o retorno
    float media = calculaMedia(a, b, c);

// verifica status de aprovação
    if (media >= 6.00) {
        printf("O aluno está aprovado!");
    }
    else if (media >= 4.00) {
        printf("O aluno tem direito à VS.");
    }
    else {
        printf("O aluno está reprovado...");
    }
    

    return 0;
}