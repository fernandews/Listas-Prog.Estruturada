#include<stdio.h>
#include<math.h>
#include<string.h>

float media (float *vetor, int contador_vetor_media)
{
    int i;
    float m = 0;
    for ( i = 0; i < contador_vetor_media; i++)
    {
        m = m + vetor[i];
        //printf("%f\n",m);
    }
    
    float med = ( m /contador_vetor_media);
    return med;
}

float desvio(float media, float *vetor, int contador)
{
    int i;
    float novo_vetor;
    for (i = 0; i < contador; i++)
    {
        novo_vetor[i] = (vetor[i] - media);
    }
    return novo_vetor;
}

float variancia(float *vetor, int contador)

{
    int i;
    float novo_vetor;
    for (i = 0; i < contador; i++)
    {
        novo_vetor[i] = pow(vetor[i],2);
    }
        
    float varia = media(novo_vetor,contador);
    return varia;
    
}



int main()
{
    /*Entrada do números de pessoas, leitura e armazenamento em n*/
    int n;
    printf("Digite o número de pessoas na pesquisa:\n");
    scanf("%d",&n);

    float altura[5] = {1.70,1.90,1.55,1.40};

    float m = media(altura, 4);
    float d = desvio(m, altura,4);
    float v = variancia(d,4);
    

    printf("A variancia de altura é %0.2f", v);

    return 0;
}