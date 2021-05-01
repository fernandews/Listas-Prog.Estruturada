// O número 3025 possui a seguinte característica: 30 + 25 = 55 -> 55*55 = 3025. Fazer
// um programa para obter todos os números de 4 algarismos com a mesma característica do
// número 3025.

#include <stdio.h>

int main() {
    printf("Os números são: \n");
    
    for (size_t i = 1000; i < 10000; i++)
    {
        int num = i;

        // 30   25
        int half1 = num / 100;
        int half2 = num % 100;

        // 30 + 25
        int sum = half1 + half2;

        // checa se a soma ao quadrado é igual ao número original
        if (sum * sum == num)
        {
            printf("%d \n", num);
        } 
    };
    
    return 0;
}