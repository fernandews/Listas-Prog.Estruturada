#include<stdio.h>
#include<string.h>
#include<ctype.h>

void concatena_dados(char *concatenado, char *blank, char *name, char *adress, char *telephone, int c1, int c2, int c3)
{   
    strncat(concatenado, name, c1 );
    strcat(concatenado, blank);
    strncat(concatenado, adress, c2);
    strcat(concatenado, blank);
    strncat(concatenado, telephone, c3 );
        
    printf("concatenado = %s\n", concatenado);

}


int main()
{   char concatenado[140];
    char nome[51];
    char endereco[71];
    char telefone[15];

    //Variáveis que receberão o nome;
    printf("Digite um nome de uma pessoa:\n");
    
    int i;
    int cont1 = 0 ;
    for (i = 0; i < 50; i++)
    {
        scanf("%c",&nome[i]);
        cont1 += 1;
        if (nome[i] == '\n')
        {
            nome[i] = '\0';
            break;
        }
    }
    
    //Variáveis que receberão o endereco;
    printf("Digite o endereço dessa pessoa:\n");
    int j, cont2 = 0 ;
    for (j = 0; j < 70; j++)
    {
        scanf("%c",&endereco[j]);
        cont2 += 1;
        if (endereco[j] == '\n')
        {
            endereco[j] = '\0';
            break;
        }
    }
    

    //Variáveis que receberão o telefone;   
    printf("Digite o número de telefone dessa pessoa:\n");
    int k, cont3 = 0 ;
    for (k = 0; k < 14; k++)
    {
        scanf("%c",&telefone[k]);
        cont3 += 1;
        if (telefone[k] == '\n')
        {
            telefone[k] = '\0';
            break;
        }
    }

    char blankSpace[] = {' ', '\0'}; 

    concatena_dados(concatenado, blankSpace, nome, endereco, telefone, cont1, cont2, cont3);

    return 0;
}