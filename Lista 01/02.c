// Fazer um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o
// menor deles, os valores pares e a média.

#include <stdio.h>

int main () {
    // recebendo os valores
    float a, b, c;

    printf("Insira o primeiro numero: ");
    scanf("%f", &a);

    printf("Insira o segundo numero: ");
    scanf("%f", &b);

    printf("Insira o terceiro numero: ");
    scanf("%f", &c);

    // calculando a média
    float media = (a + b + c) / 3;

    // checando qual o maior e o menor
   if (a >= b && a >= c) {
       printf("Maior: %0.2f \n", a);
       if (b < c)
       {
           printf("Menor: %0.2f \n", b);
       } else {
           printf("Menor: %0.2f \n", c);
       };   
   }
   else if (b >= a && b >= c)
   {
       printf("Maior: %0.2f \n", b);
       if (a <= c) {
           printf("Menor: %0.2f \n", a);
       } else {
           printf("Menor: %0.2f \n", c);
       };
   }
   else if (c >= a && c >= b) {
       printf("Maior: %0.2f \n", c);
       if (a <= b) {
           printf("Menor: %0.2f \n", a);
       } else {
           printf("Menor: %0.2f \n", b);
       }
   };

    // identificando os pares
    printf("Pares: ");
    if ((int) a % 2 == 0)
    {
        printf("%0.2f ", a);
    };
    if ((int) b % 2 == 0)
    {
        printf("%0.2f ", b);
    };
    if ((int) c % 2 == 0)
    {
        printf("%0.2f ", c);
    };

    // imprimindo a média
    printf("\nMedia: %0.2f", media);

    return 0;
}