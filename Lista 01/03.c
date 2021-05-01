// Fazer um programa que recebe um símbolo de operação do usuário (+, -, / ou *) e dois
// números reais. O programa deve retornar o resultado da operação recebida sobre estes
// dois números.

#include <stdio.h>

int main () {
    float a, b;
    char op;

    printf("Informe o operador desejado: ");
    scanf ("%c", &op);

    printf("Informe um numero: ");
    scanf("%f", &a);

    printf("Informe um numero: ");
    scanf("%f", &b);

    if (op == '+') {
        float soma = a + b;
        printf("%.2f + %.2f = %.2f", a, b, soma);
    }
    else if (op == '-') {
        float diferenca = a - b;
        printf("%.2f - %.2f = %.2f", a, b, diferenca);
    }
    else if (op == '/') {
        float quociente = a / b;
        printf("%.2f / %.2f = %.2f", a, b, quociente);
    }
    else if (op == '*') {
        float produto = a * b;
        printf("%.2f * %.2f = %.2f", a, b, produto);
    };
    
    return 0;
}