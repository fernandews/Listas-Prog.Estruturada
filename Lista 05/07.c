#include<stdio.h>
#include<string.h>
#include<ctype.h>

void cria_abreviatura( char *nome, char *abreviacao)
{
    int j, contador = 0, i = 0;
    while (nome[i] != '\0')    
    {
        if (isupper(nome[i]) != 0 )
        {
            
            for ( j = 0; j < 11; j++)
            {
                abreviacao[j] = nome[i]; 
                
            }
            printf("%c.",abreviacao[contador]);
            contador += 1;
            
        }
        i += 1;    
    }       
}


int main()
{
    char nome_completo[51];
    char abreviatura[12];

    nome_completo[50] ='\0';

    int i;
    for (i = 0; i < 50; i++)
    {
        scanf("%c",&nome_completo[i]);

        if (nome_completo[i] == '\n')
        {
            nome_completo[i] = '\0';
            break;
        }
    }

    cria_abreviatura(nome_completo,abreviatura);

    return 0;
}