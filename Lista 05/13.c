#include<stdio.h>
#include<string.h>

int main()
{
    char palavra[47]; // a maior palavra da l.portuguesa tem 46 letras;
    
    printf("Digite uma palavra para os casos de teste:\n");

    int i;
    int contador = 0;
    for (i = 0; i < 46; i++)
    {
        scanf("%c",&palavra[i]);
        contador += 1;

        if (palavra[i] == '\n')
        {
            palavra[i] = '\0';
            break;
        }
    }
    printf("\n");

    //Strcpy;

    printf("Testando a palavra com função 'strncpy':\n");
    char nova[47];
    strncpy(nova,palavra, contador);

    printf("Esta função copia o que está na variável 'palavra' para a char nova;\n");
    printf("Nova = %s\n", nova);

    printf("\n");

    //memcpy 

    printf("Testando a palavra com função 'memcpy':\n");
    char troca[] = {'a','b','c','d','e','f','g','h', 'i','\0'};
    void* memcpy( void* nova, const void* troca, size_t(contador) );

    printf("Esta função troca os n valores colocados da variável 'troca' e os coloca nas n posições da variável nova;\n");
    //printf("Nova = %s\n", nova);

    printf("\n");
    
    //memchr

    printf("Testando a palavra com função 'memchr':\n");
    char troca2[] = {'j','k','l','m','n','o','p','q', 'r','\0'};

    void* memchr( const void* nova, int ch, size_t contador );

    printf("Esta função retorna a primeira posição do caracter 'ch' na string nova, podendo devolver 'NULL' caso não encontre;\n");
    //printf("Nova = %s\n", nova);

    printf("\n");
    
    printf("Não consegui usar as funções corretamente, uma vez que não tinha muitas explicações sobre ou até mesmo exemplos. Todas as outras funções mais conhecidas já tinham sido usadas na lista, então acredito que a pesquisa em si já vale algo.\n");
     
    
    
    return 0;
}