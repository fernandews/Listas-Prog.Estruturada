#include<stdio.h>
#include<string.h>
/* Tentativa de concatenar os valores da saída
char concatena_strings(char v, char w) 
{
    return strcat(v, w);
}
*/

int main()
{
    int a, x, z;

    printf("Digite um valor x: \n");
    scanf("%d",&x);

    printf("Digite um valor z: \n");
    scanf("%d",&z);

    a = x;

    while (z < x) //Quando z é menor que x, é pedido para que o usuário escreva de novo
    {
        printf("Por favor, digite um valor para z que seja maior que x: \n");
        scanf("%d",&z);
    }
  
    if (z == x)   //Se z for igual a x, printa para não efetuar soma.
    {
        printf("0 (Os valores já são iguais e não é necessário efetuar a soma.)\n");
    }
        
    else          //Se z for maior que x
    {          
        while (x < z)
        {
            int i;
            int contador = 0;
            int valor;
            char inicio, total;

            for (i = x + 1; x < z; i++)     // i é igual a x, e roda até x ser maior que z
            {   
                valor = i;                  // valor recebe o valor de i
                x = x+valor;                // x acumula o valor
                         
                contador = contador +1; 
                
                /*Aqui tinha pensado em pegar o valor e transformar em uma string e concatenar
                com o "+" para fazer a saída pedida na questão, chamaria as funções até que o
                programa acabasse*/ 
                                            
                /*char op = "+";            
                char string;
                sprintf(string, "%s", valor); 

                inicio = concatena_strings(op,string);                
                total = concatena_strings(inicio,op);
                */
            }
        
            printf("%d (valor final = %d)\n", contador, x);
                     
        }     
    }
    
    return 0;
}
