#include<stdio.h>
#include<stdlib.h>

void busca_no_vetor(int n, int *array)
{   

    // Caso o valor não esteja no vetor. // Também podia ter sido feito com um for igual mais abaixo;
    if (n != array[0] & n != array[1] & n != array[2] & n != array[3] & n != array[4] & n != array[5] & n != array[6])
    {
        printf("%d.\nO valor %d não se encontra no vetor.", -1, n);         
    }

    int a;
    for (a = 0; a < 7; a++)
    {
        if (array[a] == n)
        {
            printf("O valor %d encontra-se na posição %d do vetor          .\n", n, a);   
        }
    }
}

void soma_das_posicoes_no_vetor(int *array)
{
    int b, novo_vetor[7];
    novo_vetor[0] = array[0];

    for (b = 1; b < 7; b++)
    {
        novo_vetor[b] = (array[b] + novo_vetor[b-1]); 
    }
    
    printf("O vetor após a soma é [%d,%d,%d,%d,%d,%d,%d]", novo_vetor[0],novo_vetor[1],novo_vetor[2],novo_vetor[3],novo_vetor[4],novo_vetor[5],novo_vetor[6]);
}



int main()
{   
    // parte a: declarar um vetor de tamanho 7 e pedir os valores do usuário;
    
    int vetor[7];
    printf("Digite os valores para o vetor (apenas em uma linha e cada número com espaço):\n");
    scanf("%d %d %d %d %d %d %d", &vetor[0],&vetor[1],&vetor[2],&vetor[3],&vetor[4],&vetor[5],&vetor[6]);


    //parte b: listar o conteúdo do vetor com suas referidas posições no armazenamento;
    
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("O conteúdo do vetor na posição %d é %d e seu endereço de memória é %p \n", i, vetor[i], &vetor[i]);
    }


    //parte b.2: pesquisar um valor dentro do vetor e retornar a posição desse vetor, caso não exista retornar "-1";
    
    int valor_buscado;
    printf("Digite um valor a ser buscado no vetor:\n");
    scanf("%d", &valor_buscado);
    
    busca_no_vetor(valor_buscado, vetor);
    
    
    // parte c: trocar valores no vetor a partir de somas nas posições, ex: [1,2,3,4,5] ==== [1,3,6,10,15];
    
    soma_das_posicoes_no_vetor(vetor);
    
    return 0;
}