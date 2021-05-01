// Fazer uma função denominada divs() que:
// a. recebe como parâmetro um número inteiro n por valor e dois números inteiros max e min por
// referência;
// b. retorna 0 se o número num é primo e 1 caso contrário. Se o número não for primo, as variáveis
// max e min devem assumir os valores do menor e do maior divisores inteiros do número,
// respectivamente, desconsiderando o número 1 e o próprio número num.

#include <stdio.h>

int* divs(int num) {
    int primo = 0;
    int min = 0;

// checa se o número possui divisores fora 1 e num
    for (size_t i = 2; i < num / 2; i++) {
        if (num % i == 0) {
            primo = 1;

            // define o menor divisor para o primeiro
            if (min == 0) {
                min = i;
            };       
        };
    };

    int max = num / min;
    
    if (primo == 0) {
        printf("%d e um numero primo", num);
    }
    else {
        printf("%d nao e um numero primo, sendo %d seu menor divisor e %d o maior.", num, min, max);
    }

    return 0;
};

int main () {
    int num;

    printf("Informe o numero desejado: ");
    scanf("%d", &num);

    divs(num);

    return 0;
}