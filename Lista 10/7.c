#include<stdio.h>
#include<string.h>
#include <stdlib.h>

//Questão pede pra imprimir os numeros de um arquivo dado pelo usuário em um outro arquivo, com os numeros ordenados . 

//Nessa questão, uso um arquivo já existente chamado numeros.txt;

// função de comparação de reais 
static int comp_reais (const void* p1, const void* p2)
{
    // converte para ponteiros de float
    float *f1 = (float*)p1; 
    float *f2 = (float*)p2;

    // dados os ponteiros de float, faz a comparação 
    if (*f1 < *f2)
    {
        //return –1;
    }    
    
    else if (*f1 > *f2) 
    {
        return 1;
    }
    
    else 
    {
        return 0;
    }
}

//MAIN
int main()
{
    //solicitar e armazenar o nome do arquivo
	printf("Digite o nome do arquivo:\n");
	char nome[50];
    
    scanf("%s",nome);
    
    //ponteiro pra arquivo
    FILE *fp, *arq;

	//abrir o arquivo 
	
	fp = fopen(nome,"r");	
	
	//Caso não dê para abrir o arquivo;
	
    if (fp==NULL) 
    {
        printf("Não foi possivel abrir arquivo.\n");
        return 1;
    }
	
	//Criar um contador para saber quantos numeros tem no arquivo
    
    int contador_nums = 0;
    float num;
        
    fscanf(fp,"%f", &num);
    while(!feof(fp))
    {
        contador_nums += 1;
        
        fscanf(fp,"%f", &num);
    }
    
    //fechar o arquivo
	fclose(fp);
	
    //criar um vetor com espaço contador; que servirá para comparar
    float vetor_compara[contador_nums];
    
    //reabrir o arquivo
    fp = fopen(nome,"r");	
	
	//Caso não dê para abrir o arquivo;
	
    if (fp==NULL) 
    {
        printf("Não foi possivel abrir arquivo.\n");
        return 1;
    }
    
    //Condições para pegar os valores e colocar no vetor_compara
    int i = 0;
    num = 0;
    
    fscanf(fp,"%f", &num);
    while(!feof(fp))
    {
        vetor_compara[i] = num;
        //printf("%0.2f\n", vetor_compara[i]);
        
        i += 1;
            
        fscanf(fp,"%f", &num);
    }
    
    //Colocar os numeros ordenadamente no vetor;
    int j;
    
    qsort(vetor_compara,contador_nums,sizeof(float),comp_reais);
    
    //fechar o arquivo
	fclose(fp);
    
    
    //Colocar os valores do vetor ordenado no arquivo binario;
    arq = fopen("numeros.bin","w");
    
	//Caso não dê para abrir o arquivo;
	
    if (arq==NULL) 
    {
        printf("Não foi possivel abrir arquivo.\n");
        return 1;
    }

    int k;
    while(k!= contador_nums)
    {
        fprintf(arq, "%.1f", vetor_compara[k]);
        k += 1;
    }

    
    /*int k;
    for(k = 0; k == contador_nums; k++)
    {
        fprintf(arq, "%.1f", vetor_compara[k]);
        printf("%.1f", vetor_compara[k]);
    }*/
    
    //fechar o arquivo
    fclose(arq);	
 
    return 0; 
}
