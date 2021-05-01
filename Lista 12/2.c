#include<stdio.h>

int soma_impar_recursiva(int *v, int pos, int tam)
{
    //printf("%d", pos);
    
    if (pos == tam)
    {
        return 0;
    }
    
    else
    {
        if (v[pos] % 2 == 1 )
        {
            
            return v[pos] + soma_impar_recursiva(v, pos + 1, tam);
        }
        
        else
        {
            return soma_impar_recursiva(v, pos + 1, tam);
        }
    }
    
}

int main()
{
    int vetor[] = {0,1,2,3,4,5,6,7,8,9,10};
    int len = sizeof(vetor)/sizeof(int);
    int pos = 0;
    
    int resultado = 0;
    
    resultado += soma_impar_recursiva(vetor, pos, len);
    
    printf("%d", resultado);
    return 0;
}
