#include<stdio.h>
#include<string.h>

void contador_string(char *array, char var)
{
    int i;
    int vezes = 0;

    for (i = 0; i < 20; i++)
    {
        if (array[i] == var)
        {
            vezes += 1;
        }
    }

    if (vezes == 1 || vezes == 0)
    {
        printf("%d vez.\n", vezes);    
    }
    else
    {
        printf("%d vezes.\n", vezes);
    }    
}

int main()
{   
    /*char vetor[] = {'o',' ','d','i','a',' ','e','s','t','a',' ','l','i','n','d','o',' ','n','e','\0'};
    char buscado = 't';
    contador_string(vetor, buscado);
    return 0;
    */

    //Caso deva receber valor do teclado
    
    printf("Digite o texto ou palavra a seguir: ");
    char v[21];
    v[20] ='\0';

    int i;
    for (i = 0; i < 20; i++)
    {
        scanf("%c",&v[i]);

        if (v[i] == '\n')
        {
            v[i] = '\0';
            break;
        }
    }
    
    char buscado;

    printf("Digite a letra buscada: ");
    scanf("%s",&buscado);
    
    contador_string(v, buscado);

    return 0;
}