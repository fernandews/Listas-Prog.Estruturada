#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void operacoes_aritmeticas(float *a, float *b, char *c)
{
    int i;
    float vetor4[20];

    for (i = 0; i < 20; i++)
    {
        //operador soma
        if (c[i] == '+')
        {
            vetor4[i] = (a[i] + b[i]);
        }
        

        //operador subtração
        if (c[i] == '-')
        {
            vetor4[i] = (a[i] - b[i]);
        }
        
        //operador multiplicação
        if (c[i] == '*')
        {
            vetor4[i] = (a[i] * b[i]);
        }
        

        //operador divisão
        if (c[i] == '/')
        {
            vetor4[i] = (a[i] / b[i]);
        }   
    }

    int j;
    for (j = 0; j < 20; j++)
    {
        printf("%0.2f\n", vetor4[j]);
    }
}


int main()
{
    //Considerando que os valores dos vetores serão dados pelo usuário
    
    float v1[20];
    float v2[20];
    char v3[20];
    
    printf("Digite 20 valores para o vetor 1 (cada valor separado por um espaço):\n");
    scanf("%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",&v1[0], &v1[1], &v1[2], &v1[3], &v1[4], &v1[5], &v1[6], &v1[7], &v1[8], &v1[9], &v1[10], &v1[11], &v1[12], &v1[13], &v1[14], &v1[15], &v1[16], &v1[17], &v1[18], &v1[19]);

    printf("Digite 20 valores para o vetor 2 (cada valor separado por um espaço):\n");
    scanf("%f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f %f",&v2[0], &v2[1], &v2[2], &v2[3], &v2[4], &v2[5], &v2[6], &v2[7], &v2[8], &v2[9], &v2[10], &v2[11], &v2[12], &v2[13], &v2[14], &v2[15], &v2[16], &v2[17], &v2[18], &v2[19]);

    printf("Digite 20 sinais de operação para o vetor 3 (cada valor separado por um espaço):\n");
    scanf("%s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s %s",&v3[0], &v3[1], &v3[2], &v3[3], &v3[4], &v3[5], &v3[6], &v3[7], &v3[8], &v3[9], &v3[10], &v3[11], &v3[12], &v3[13], &v3[14], &v3[15], &v3[16], &v3[17], &v3[18], &v3[19]);
     
    /*    
    //Considerando que os valores serão definidos no programa
    
    float v1[] = {10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100,115};
    float v2[] = {5,10,15,20,25,30,35,40,45,50,55,60,65,70,75,80,85,90,95,100};
    char v3[] = {'+', '-', '*', '/', '+', '-', '*', '/', '+', '-', '*', '/', '+', '-', '*', '/', '+', '-', '*', '/', '\0'};
    
    */

    //Chamada da função
    printf("O resultado da efetuação dos cálculos ente os vetores é:\n");
    operacoes_aritmeticas(v1, v2, v3);
    
    return 0;
}