#include<stdio.h>
#include<string.h>

/*Função inverte cria um laço em que o vetor invertido recebe o valor de x na posição i; */
char inverte_vetor(char *v, char *inverte)
{
    int i, j;
    i = 20;
        
    for (j = 0; j < 21; j++)
    {   
        inverte[j] = v[i];
        
        i = i - 1;
    } 

}

/*Definição do vetor X e chamada da função*/
int main()
{
    char vetor[22];
    char invertido[22];
    int contador = 0;

    int i;
    for (i = 0; i < 21; i++)
    {
        scanf("%c",&vetor[i]);
        contador += 1;
        if (vetor[i] == '\n')
        {
            vetor[i] = '\0';
            break;
        }
    }
    
    inverte_vetor(vetor, invertido);
    
    int h;
    int partir_de = (21 - contador);

    for ( h = partir_de; h < 21; h++)
    {
        printf("%c",invertido[h]);    
    }
    printf("\n");

    return 0;
}