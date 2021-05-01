// 8. Considerando a existência de notas (cédulas) nos valores R$ 100, R$ 50, R$ 20, R$ 10,
// R$ 5, R$ 2 e R$ 1, escreva um programa que capture um valor inteiro em reais (R$) e
// determine o menor número de notas para se obter o montante fornecido. A função deve
// ter o seguinte protótipo:
// int total_de_notas(int valor);

#include <stdio.h>

int total_de_notas(int valor) {
    int moneyleft = valor;

    // calculando a qtt de notas de 100 e o valor que falta
    int qtcem = moneyleft / 100;
    moneyleft = moneyleft % 100;

    // para notas de 50
    int qtcin = moneyleft / 50;
    moneyleft = moneyleft % 50;

    // para notas de 20
    int qtvin = moneyleft / 20;
    moneyleft = moneyleft % 20;

    // para notas de 10
    int qtdez = moneyleft / 10;
    moneyleft = moneyleft % 10;

    // para notas de 05
    int qtcnc = moneyleft / 5;
    moneyleft = moneyleft % 5;

    // para notas de 02
    int qtdoi = moneyleft / 2;
    moneyleft = moneyleft % 2;
    
    // para notas de 01
    int qtum = moneyleft / 1;
    moneyleft = moneyleft % 1;

    int total_notas = qtcem + qtcin + qtvin + qtdez + qtcnc + qtdoi + qtum;

    return total_notas;
};

int main() {
    int value;

    printf("Informe o valor: ");
    scanf("%d", &value);

    printf("O numero minimo de notas necessario e %d", total_de_notas(value));

    return 0;
};