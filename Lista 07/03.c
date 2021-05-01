#include<stdio.h> 

int inicializa(int num, int *v)
{
    int i;
    for (i = 0; i < num; i++)
    {
        v[i] = (5*i);
    }
}

int imprimir(int num, int *vetor)
{
    int j;
    for (j = 0; j < num; j++)
    {
        printf("%d ", vetor[j]);
    }
}

int main()
{
    //Vetor de 10 valores;
    
    int valor = 10;
    int vet1[10];
    int *m;
    m = &vet1;
    
    inicializa(valor,m);
    imprimir(valor,m);
    
    
    //Generalizado;
    
    int n;
    printf("\nDigite o tamanho do vetor:\n");
    scanf("%d",&n);
    
    int vetor[n];
    int *p;
    p = &vetor;
    
    
    inicializa(n,p);
    imprimir(n,p);
}
