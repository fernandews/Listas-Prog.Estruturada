#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    /*Questão A*/
    int a = 1, b = 2, c =3 , d = 4;
    
    /*Questão B*/
    float e = 5, f = 6, g = 7, h = 8;

    /*Questão C*/
    char vetor[10];

    /*Questão D*/
    int x = 24;

    /*Questão E*/
    int *p;
    p = &a;

    /*Questão F*/
    printf("O valor de *p é %d e do valor incrementado de *p é %d\n",*p,(*p)++);

    return 0;
}