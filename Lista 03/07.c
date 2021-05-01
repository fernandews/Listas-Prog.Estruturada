#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{   
    /*Código oficial*/
    int *pti;
    int veti[] = {10,7,2,6,3};
    pti = veti;

    /*Código das respostas*/
    printf("A afirmativa errada dessa questão é a letra D, pois a impressão de pti[1] = %d.\n", pti[1]);
        

    /*Análise e impressão das afirmativas*/
    printf("A afirmativa A está correta porque a impressão de *pti = %d.\n ", *pti);
    printf("A afirmativa B está correta porque a impressão de *(pti+2) = %d.\n", *(pti+2));
    printf("A afirmativa C está correta porque a impressão de pti[4] = %d.\n", pti[4]);
    printf("A afirmativa E está correta porque a impressão de *(veti+3) = %d.\n", *(veti+3));
    
    return 0;
}