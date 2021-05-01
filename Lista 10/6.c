#include<stdio.h>

//Questão pede pra criar 10 arquivos de texto que contenha um mini texto dentro

int main()
{
    FILE *fp;
    
    int i;
    for(i = 1; i < 11; i++)
    {
        if (i < 10)
        {
            char nova[12] = {'t','e','s','t','e','0',' ','.','t','x','t','\0'};
            nova[6] = i+'0';
                        
            //criar um arquivo de texto 
            fp = fopen(nova,"w");
            
            //escrever dentro do arquivo
            fprintf(fp, "Texto do arquivo 0%d", i);
            
            //fechar o arquivo
            fclose(fp);
        
        }    
        
        else
        {
            char nova[12] = {'t','e','s','t','e','0',' ','.','t','x','t','\0'};
            nova[5] = '1';
            nova[6] = '0';
                        
            //criar um arquivo de texto 
            fp = fopen(nova,"w");
            
            //escrever dentro do arquivo
            fprintf(fp, "Texto do arquivo %d", i);
            
            //fechar o arquivo
            fclose(fp);	
        
        }
    
    }
    
    return 0;
}
