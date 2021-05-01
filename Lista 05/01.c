#include<stdio.h>
#include<string.h>
#include<ctype.h>


/*Função que calculará o número de vogais em uma string*/
int calcula_vogais(char *v, int *num)
{
    int i;

    for ( i = 0; i < 200; i++)
    {
        if (v[i] == 'A' | v[i] == 'a')
        {
            *num += 1;
        }
        if (v[i] == 'E' | v[i] == 'e')
        {
            *num += 1;
        }
        if (v[i] == 'I' | v[i] == 'i')
        {
            *num += 1;
            
        }
        if (v[i] == 'O'| v[i] == 'o')
        {
            *num += 1;
        }
        if (v[i] == 'U'|v[i] == 'u')
        {
            *num += 1;
        }
        
    }   
}

/**/
int main()
{   
    char texto[201];
    int num_vogais = 0;
    int *p;
    p = &num_vogais;
    
    
    int i;
    printf("Digite seu texto: ");
    for (i = 0; i < 200; i++)
    {
        scanf("%c",&texto[i]);

        if (texto[i] == '\n')
        {
            texto[i] = '\0';
            break;
        }
    }
    
    calcula_vogais(texto, p);
    printf("O número de vogais no texto é %d.\n", num_vogais);
    

    return 0;
}
