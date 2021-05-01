#include<stdio.h>

int fibonacci(int n)
{
    if (n==1)
    {
        return 1;
    }
    if (n==2)
    {
        return 1;
    }
    
    return fibonacci(n-1) + fibonacci(n-2);
        
}

int main()
{
    //Entradas
    int num;
    printf("Digite o número de termos que devem ser impressos\n");
    scanf("%d",&num);

    int resultado = fibonacci(num);

    int i;
    for ( i = 1; i < num; i++)
    {
        printf("%d ",fibonacci(i));    
    }
    
    return 0;
}

