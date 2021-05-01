#include<stdio.h>
#include<math.h>


int main()
{
    int b, p;
    
    scanf("%d %d",&b,&p);

    /*cálculo da potenciação*/
    float a =(pow(b,p));

    /*saída*/
    printf("O resultado é: %0.3f \n", a); // deixei a saída como float para operações com valores negativos
    return 0;
}
