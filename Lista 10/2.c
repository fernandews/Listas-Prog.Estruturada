#include<stdio.h>
#include<string.h>
//Questão pede pra imprimir a média de um aluno a partir da matricula e nome do arquivo dado pelo usuário. 
//Caso não encontre, deve retornar -1.
//Caso não dê para abrir, imprima ERRO e termine o programa.

//Nessa questão, uso um arquivo já existente chamado teste2.txt;

float media (char* mat, char* nome_arquivo)  
{
    FILE *fp;
    float CR = -1; 

	//abrir o arquivo e criar uma variavel que armazenará o CR
	
	fp = fopen(nome_arquivo,"r");	
	
	//Caso não dê para abrir o arquivo;
	
    if (fp==NULL) 
    {
        printf("Não foi possivel abrir arquivo.\n");
        return 1;
    }
	
	//procurar a matricula e pegar o CR
    
    char matricula[10];
        
    fscanf(fp,"%s", matricula);
    while(!feof(fp))
    {
        if (strcmp(mat, matricula) == 0)
        {
            CR = 0;
            
            fscanf(fp,"%f", &CR);
            break;
        }        
        
        else
        {
            char descarte ;
            do
            {
                fscanf(fp,"%c", &descarte);
            }
            while(descarte != '\n');
        }    
        fscanf(fp,"%s", matricula);
        
    }
    
	//fechar o arquivo
	fclose(fp);	
    return CR;
}

int main()
{
    //solicitar e armazenar o nome do arquivo
	printf("Digite o nome do arquivo:\n");
	char nome[50];
    
    scanf("%s",nome);
    
    //solicitar e armazenar a matricula
    printf("Digite o número da matrícula:\n");
	char matricula[10];
    
    scanf("%s",matricula);

    //chamar a função
    float resultado = media(matricula, nome);
    
    if(resultado != -1)
    {
        printf("O CR do(a) aluno(a) de matrícula %s é: %0.2f\n", matricula, resultado);
    }
    else
    {
        printf("O CR é : %0.2f, pois a matrícula do(a) aluno(a) não foi encontrada.\n", resultado);    
    }
    
    return 0;
}

