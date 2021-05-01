#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>


void *acima_da_media(int n, float *vet, int *tam )
{
    //Parte 1: Cálculo da média;
    float media = 0;
    
    int i;
    for ( i = 0; i < n; i++)
    {
        media += vet[i];  
    }

    media = (media / n);
    printf("A média é: %0.2f\n", media);
        
    
    //Parte 2: Contar quantos valores do vetor estão acima da média;

     
    int cont1 = 0;
    tam = &cont1; // O ponteiro 'tam' guarda o tamanho que o novo vetor com valores acima da média terá;
        
    int j;   
    for (j = 0; j < n; j++)
    {
        if (vet[j] > media)
        {
            cont1 += 1;   
        }
    }
    
    
    //Parte 3: Criar um vetor alocado dinamicamente que recebe os valores acima da média;

    float *vetor_resposta; //ponteiro que receberá a alocação;    
    vetor_resposta = (float *) malloc( *tam * sizeof(float));

    if (vetor_resposta == NULL) 
    {
        printf("Falta de memória\n");
        exit(1);
    }

    //Adicionando os valores acima da média dentro do vetor alocado;
    int h, g = 0;
    for ( h = 0; h < n; h++)
    {
        if (vet[h] > media)
        {
            vetor_resposta[g] = vet[h];
            g += 1;
        }   
    }

    //Printando como um vetor;
    printf("As notas acima da média são:\n");

    printf("{");

    int k;
    for ( k = 0; k < cont1 -1; k++)
    {
        printf("%0.2f,", vetor_resposta[k]);               
    }
    
    if (k = (cont1 -1) )
    {
        printf("%0.2f", vetor_resposta[k]);
    }
    printf("}\n");

    //Limpando a alocação;
    free(vetor_resposta);   
}


int main()
{
    //Teste com valores prontos;

    /*float vetor[] = {5.5, 3.2, 2.5, 9.4, 7.5, 4.1, 5.4, 8.0, 6.9};
    int num = 9;
    int *tam;
    acima_da_media( num, vetor, tam);
    */

    //Teste com valores do usuário;
    int num, a, *tam;
    float *vetor;

    printf("Digite o tamanho do vetor de notas:\n");
    scanf("%d", &num);
  
    vetor = (float *) malloc( num * sizeof(float));

    printf("Digite as notas (uma por linha):\n");
    for (a = 0; a < num; a++)
    {
        scanf("%f",&vetor[a]);
    }
    
    acima_da_media(num, vetor, tam);

    return 0;
}
