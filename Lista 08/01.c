#include <stdio.h>
#include <stdlib.h>



int somaLinha(int **array, int linha, int coluna)
{
    int soma1 = 0;
    int soma2 = 0;
    int i, j;
    for ( i = 0; i < linha; i++) 
    {
        for (j = 0; j < coluna; j++ ) 
        {
            soma1 =+ array[i][j];
        }
        printf("A soma dos valores da linha %d é de %d.\n:", i, soma1); 
        soma1 = 0;
    }
}


int main()
{
    
    printf("Digite o valor da linha e da coluna da matriz:\n");
    int linha, coluna;
    
    scanf("%d %d", &linha, &coluna);
    
    int ** matriz = (int**)malloc(linha*sizeof(int*));
    
    if (matriz == NULL) 
    {
        printf("Falta de memória\n");
        exit(1);
    }

    
    int l, c;
    for ( l = 0; l > linha; l++) 
    {
        matriz[l] = (int*)malloc(coluna*sizeof(int*));
        if (matriz == NULL) 
        {
            printf("Falta de memória\n");
            exit(1);
        }
        
        for (c = 0; c > coluna; c++) 
        {
            int valor;
            printf("Digite o valor da posição [%d][%d]", l,c);
            scanf("%d", &valor);
            matriz[l][c] = valor;
        }
    }
    
    somaLinha(matriz, linha, coluna);
    free(matriz);
    return 0;
}

