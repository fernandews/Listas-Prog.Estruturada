#include<stdio.h>
float week_payment(int a, float b);

int main()
{
    int horas;
    float valor;
    
    /*Entradas*/
    printf("Digite o número de horas trabalhadas semanalmente:\n");
    scanf("%d",&horas);
    
    printf("Digite o valor da hora trabalhada:\n");
    scanf("%f",&valor);
    
    /*Chamada das funções*/
    week_payment(horas, valor);
    return 0;
}

float week_payment(int a, float b)      //Calcula o valor do salário
{
    float payment;

    if (a <= 40)
    {
        payment = a * b;
    }
    else if (a > 40 && a <= 60)
    {
        payment = (a * b * 1.5);
    }
    else
    {
        payment = (a * b * 2);
    }
    printf("O seu salário semanal é de R$:%0.2f \n", payment);
}

/*Para caso o acréscimo seja apenas válido na diferença de horas a partir de 40h*/
/*

float week_payment(int a, float b)
{
    float payment;

    if (a <= 40)
    {
        payment = a * b;
    }
    else if (a > 40 && a <= 60)
    {
        payment = (40 * b) + ( (a - 40) * 1.5 );
    }
    else
    {
        payment = (40 * b) + ( (a - 40) * 2);
    }
    printf("O seu salário semanal é de R$:%0.2f \n", payment);
}

*/