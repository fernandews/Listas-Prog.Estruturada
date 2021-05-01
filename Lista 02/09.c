#include<stdio.h>
#include<string.h>

/*Considerando valores n de 3 digitos */
int inverte(int n)
{
    int a,b,c;
    a = (n%10);
    b = ((n/10)%10);
    c = (n/100);
    
    printf("%u%u%u\n",a,b,c);
}


int main()
{
    unsigned int num;
    scanf("%d",&num);
    inverte(num);

    return 0; 
}

/*
char inverte(char x) // função que inverte os valores do vetor x, isso tudo nele sendo string 
{
    int i;
    char invertido[100];

    for (i = 0; i < strlen(x) ; i++)
    {
        for (j = -1; j < -101; i--)
        {
            invertido[i] = x[j];
        }
    }
    
    //retorna um vetor char com valores ao contrário
    return invertido    
}

int main()
{
    //Entrada e leitura da variável
    unsigned int num;
    
    printf("Digite um valor:\n");
    scanf("%u",&num);

    //Criação de um contador para saber qual o tamanho do valor num

    for (i = 0; i < ; i++) //precisa definir até quando vai contar
    {
        int contador = 0;
        contador = ++i
    }
    
    //Transformação da variável num
    char string[100];
    sprintf (string, "%u", num); 

    int resultado = inverte(string);
    printf("%c", [2]);
    
    return 0;
}
*/