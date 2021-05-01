
#include <stdio.h>

//Faça um programa que leia um nome de “arquivo .c” digitado pelo usuário e gere um  novo que remove as linhas com comentários “//” 


//Nessa questão, uso um arquivo já existente chamado teste4.txt;

int main()
{
    //1º. Pedir do usuário o nome do usuário;
    
    char nomeArq[100];
    printf("Digite o nome do arquivo e sua extensão: (ex: nome.txt)\n");
    scanf("%s", nomeArq);
    
    //2º. Abrir e criar um arquivo;
    
    FILE *fp;
    FILE *arqFinal;
    
    fp = fopen(nomeArq,"r");
    
    char nova[13] = {'A','r','q','u','i','v','o','4','.','t','x','t','\0'};
    arqFinal = fopen(nova, "w");
    
    if (fp==NULL) 
    {
        printf("Não foi possivel abrir arquivo.\n");
        return 1;
    }
    
    //3º. Ler o arquivo do usuário e digitar no novo arquivo;
    
    char var;
    char comentada[200];

    var = getc(fp);
    
    while(!feof(fp))
    {     
        if(var == '/')
        {
            fgets(comentada,sizeof(char)*200,fp);
        }

        else
        {
            fprintf(arqFinal, "%c", var);
        }   
   
   	    //fscanf(fp,"%c",&var);
   	    var = getc(fp);
    }
           
       
    
    //4º.Fechar os arquivos;
    
    fclose(fp);
    fclose(arqFinal);

    return 0;
}

