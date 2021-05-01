#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

void CamelCase(char *s)
{
    char camel[20];
    int contador = 1;
    int spaces = 0;        

    camel[0] = toupper(s[0]); // O primeiro valor já inicia-se como maiúscula;

    int i;
    for ( i = 1; i < strlen(s); i++)
    {
        //colocar as letras na nova string;
        camel[i] = s[i];
        contador += 1;
        
        //colocar a letra maiúscula;

        if (s[i-1] == ' ')
        {
            camel[i] = toupper(s[i]);
        }
    }
    
    //Concatenar todos os valores;
    int j;
    for ( j = 0; j < contador + 1; j++)
    {       
        if (camel[j] == ' ')
        {
            spaces += 1;
            continue;
        }
        
        //colocar as letras na propria char s, sem os espaços;
        else
        {
            s[j] = camel[j];
            printf("%c", s[j]);
        }    
    }
    printf("\n");
}


int main()

{   char s[20];
    strcpy(s, "media da turma");    
    CamelCase(s);
    
    return 0;
}