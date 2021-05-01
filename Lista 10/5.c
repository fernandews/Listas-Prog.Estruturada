
#include<stdio.h>

//Escreva um programa que leia de um arquivo, cujo nome será fornecido pelo usuário,  um conjunto de números reais e armazene em um vetor. 
//O programa ao final calcula a  media dos números lidos. 

//Nessa questão, uso um arquivo já existente chamado numeros.txt;
 

int main()
{
    printf("Digite o nome do arquivo:\n");
    char nome[100];
    
    scanf("%s",nome);
    
    FILE *fp;
    
    
    fp = fopen(nome,"r");
    int contador = 0;
    float acumulador = 0;
    
    float var = 0;

    fscanf(fp,"%f",&var);
    
    while(!feof(fp))
    {      
        acumulador += var;
        contador += 1;
   	   
   	   //printf("%0.2f\n", acumulador);     
   
        fscanf(fp,"%f", &var);
    }   
    
    float media = acumulador/contador;
    fclose(fp);
    
    //criação do vetor que armazenou o valores;
    fp = fopen(nome,"r");
    
    float vetor[contador];
    int i = 1;
    
    var = 0;
    
    fscanf(fp,"%f", &var);
    vetor[0] = var;
    
    //printf("%0.2f\n",vetor[0]);
    
    while(!feof(fp))
    {
    	   fscanf(fp,"%f", &var);
        
        //printf("%d\n",i);
        
        vetor[i] = var;
        
        //printf("%0.2f\n",vetor[i]);
        
        i += 1;
    }
    
    //printf("%f\n", vetor[0]);
    
    printf("O valor é %0.2f\n", media);
    
    //fechar o arquivo
    fclose(fp);
        
    return 0;
}
