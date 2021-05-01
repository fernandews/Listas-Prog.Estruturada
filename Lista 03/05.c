#include<stdio.h>
#include<math.h>
#include<string.h>

float max_vet(int n, float *vet)
{
    float maior = 0;

    for (int i = 0; i < n; i++)
    {       
        if (maior < vet[i])
        {
            maior = vet[i];
        }
        else
        {
            continue;
        }    
    }
    printf("%0.3f",maior);
}



int main()
{   
    float vetor[6] = {1,5,9.2,4,6,7};
     
    max_vet(6, vetor);    
    return 0;
}