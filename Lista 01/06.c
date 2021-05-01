// Implemente uma função que calcule as raízes de uma equação do segundo grau, do
// tipo ax2 + bx + c = 0. Observação: para o cálculo da raiz quadrada de um número, utilize
// a função sqrt. Consulte a documentação de como usá-la no programa.

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;

    printf("Informe o valor de a: ");
    scanf("%f", &a);

    printf("Informe o valor de b: ");
    scanf("%f", &b);

    printf("Informe o valor de c: ");
    scanf("%f", &c);

    float d = b*b - 4*a*c;

    float x1 = ( -b + sqrt(d) ) / 2*a;
    float x2 = ( -b - sqrt(d) ) / 2*a;

    printf("As raizes da equação sao %.2f e %.2f", x1, x2);

    return 0;
};