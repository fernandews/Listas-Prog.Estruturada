#include<stdio.h>
int calcula_primo(int n)
{
    /*Se o valor de n for igual a 0,1,4,6,8,9,10  ele imprime como não primo*/   
    if ( (n == 0)|| (n == 1) || (n == 4) || (n == 6) || (n == 8) || (n == 9) || (n == 10) )
    {
        printf("NUMERO NAO PRIMO\n");
    }

    /*Se o valor de n for igual a 2,3,5,7, ele imprime como primo*/ 
    else if ( (n == 2) || (n == 3) || (n == 5) || (n == 7))
    {
        printf("NUMERO PRIMO\n");
    }

    /*Se o valor de n / (por valores entre 2 a 10) deixar resto 0, imprime como não primo */ 
    else if ( (n % 2 == 0) || (n%3 == 0) || (n%4 == 0) ||(n%5 == 0) ||(n%6 == 0) ||(n%7 == 0) || (n%8 == 0) || (n%9 == 0) || (n%10 == 0)  )
    {
        printf("NUMERO NAO PRIMO\n");;
    }
    
    /*Caso não, imprime como primo*/
    else
    {
        printf("NUMERO PRIMO\n");
    }  
}


int main()
{
    int num;    //declara a variável que receberá o valor
    printf("Digite um número:\n");
    scanf("%d", &num);

    /*Chama a função e passa a variável num*/
    calcula_primo(num);
    
    return 0;
}

