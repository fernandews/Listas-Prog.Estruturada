#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

char cifra_cesar(char *msg)
{
    //Declaração das char;
    char alfabeto[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    char cifrado[27] =  {'d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','\0'};

    
    //Parte 1: Contar o tamanho do texto;
    int i;
    int contador_de_caracteres = 0;
    
    for ( i = 0; msg[i] != '\0' ; i++)
    {
        //printf("%c",msg[i]);                  
        contador_de_caracteres += 1;       
    }
    //printf("%d\n",contador_de_caracteres);    

    
    //Parte 2: Alocar uma variável do tamanho do texto, que receberá a codificação;

    char *codificado;  //ponteiro que receberá a alocação;
    codificado = (char *) malloc(contador_de_caracteres  * sizeof(char));

    if (codificado == NULL) 
    {
        printf("Falta de memória\n");
        exit(1);
    }

    //Parte 3: Colocar todo o texto em minuscula;

    char *texto_em_minuscula;  //ponteiro que receberá a alocação;
    texto_em_minuscula = (char *) malloc(contador_de_caracteres  * sizeof(char));

    if (texto_em_minuscula == NULL) 
    {
        printf("Falta de memória\n");
        exit(1);
    }

    int j;
    for ( j = 0; j < contador_de_caracteres; j++)
    {
        if (isalpha(msg[j]))
        {
            texto_em_minuscula[j] = tolower(msg[j]); 
        }
        
        else
        {
            texto_em_minuscula[j] = msg[j];
        }

        //printf("%c",texto_em_minuscula[j]);   
    }


    //Parte 4: Passar o texto_em_minuscula para a cifra de César e colocar na char codificado;
    
    int k, l;
    for ( k = 0; k < contador_de_caracteres; k++)
    {
        for ( l = 0; l < 27; l++)
        {        
            if (texto_em_minuscula[k] == alfabeto[l])
            {
                codificado[k] = cifrado[l];
                //printf("%c",codificado[k]);   
            }
        
            if (isdigit(texto_em_minuscula[k]) ) 
            {
                codificado[k] = texto_em_minuscula[k];
                //printf("%c",texto_em_minuscula[k]);
            }
            
            if (isspace(texto_em_minuscula[k]) )
            {
                codificado[k] = texto_em_minuscula[k];
                //printf("%c",texto_em_minuscula[k]);
            }

            if (ispunct(texto_em_minuscula[k]) )
            {
                codificado[k] = texto_em_minuscula[k];
                //printf("%c",texto_em_minuscula[k]);
            }
            
        }
        //printf("%c",codificado[k]);
    
    }
    
    //Parte 5: Imprimir o texto codificado;
        
    printf("O texto na cifra de César é:\n");

    int m, n = 0 ;
    for ( m = 0; m < contador_de_caracteres; m++)
    {
        printf("%c",codificado[m]);    
    }
    
    printf("\n");

    //Parte 6: Liberar os espaços alocados dinamicamente;
    
    free(texto_em_minuscula);
    free(codificado);

}


int main()
{
    //Teste com valor definido;
    /*
    char msg[] = {'Z','E','B','R','A',' ', '1','^','\0'};
    cifra_cesar(msg);
    */

    //Teste com valor do usuário;
    
    char msg[151];
    
    printf("Digite seu texto aqui: ");
    int i;
    for (i = 0; i < 150; i++)
    {
        scanf("%c",&msg[i]);

        if (msg[i] == '\n')
        {
            msg[i] = '\0';
            break;
        }
    }
    
    cifra_cesar(msg);
    
    return 0;
}