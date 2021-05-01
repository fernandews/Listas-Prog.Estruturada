
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

int entrega_cifrado(char *msg)
{
    //Parte 1: Contar o tamanho do texto;
    int i;
    int contador_de_caracteres = 0;
    int contador_vazios = 0;
    
    for ( i = 0; msg[i] != '\0' ; i++)
    {
        contador_de_caracteres += 1;   
        
        if (isspace(msg[i]) != 0 )
        {
            contador_vazios += 1;
        }
    }
    
    
    //Parte 2: Colocar todo o texto sem espaço;

    char *texto_sem_espaco;  //ponteiro que receberá a alocação;
    texto_sem_espaco = (char *) malloc(contador_de_caracteres  * sizeof(char));

    if (texto_sem_espaco == NULL) 
    {
        printf("Falta de memória\n");
        exit(1);
    }

    int j;
    int k =  0;
    int contador_espaco = 0; //inicializar um contador atual com o valor dos caracteres sem espaços
    texto_sem_espaco[0] = msg[0];
    
    for ( j = 1; j < contador_de_caracteres; j++)
    {
        if (isalpha(msg[j]))
        {
            k += 1;
            texto_sem_espaco[k] = msg[j];
            
        }
        else
        {
            contador_espaco =+ 1;
        }
    }
    
    //Parte 3: Dividir o texto em blocos de 5 letras e codificar;

    char alfabeto[27] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','\0'};
    
    char *codificado;  //ponteiro que receberá a alocação;
    codificado = (char *) malloc( (k + 1)  * sizeof(char));

    
    if (codificado == NULL) 
    {
        printf("Falta de memória\n");
        exit(1);
    }

    int l;
    int numeral = 1;
    
    for ( l = 0; l < k + 1 ; l++)
    {   
        //printf("%d\n", numeral);
        
        int m;
        for ( m = 0; m < 27; m++)
        {        
            
            if (texto_sem_espaco[l] == alfabeto[m])
            {
                //printf("%d\n", numeral);
                codificado[l] = alfabeto[m+numeral]; 
                //printf("%c", alfabeto[m+numeral]);   
            }
        }
        
        if (numeral == 5)
        {
            numeral = 1; 
            //printf("%d", numeral);
            
        }
        
        else
        {
            numeral += 1;
        }
        printf("%c", codificado[l]);   
    }

}



int main()
{
    printf("Digite uma frase de no máximo 80 caracteres:\n");
    
    //Teste com valor do usuário;
    
    char msg[81];
    
    int i;
    for (i = 0; i < 80; i++)
    {
        scanf("%c",&msg[i]);

        if (msg[i] == '\n')
        {
            msg[i] = '\0';
            break;
        }
    }
    
    entrega_cifrado(msg);
    
    return 0;
}


