#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{   /*Condição*/
    int pulo[] = {0,1,2,3,4,5};
    
    /*Casos de teste*/

    printf("Considerando o vetor pulo como {0,1,2,3,4,5}, o 3° elemento seria 2( que é diferente de 3° posição, que é pulo[3])\n");

    printf("A afirmativa A está correta porque a impressão de *(pulo+2) = %d.\n",*(pulo+2));
    printf("A afirmativa B está errada porque a impressão de *(pulo+4) = %d.\n",*(pulo+4));
    printf("A afirmativa C está errada porque a impressão de pulo+4 = %d.\n", (pulo+4));
    printf("A afirmativa D está errada porque a impressão de pulo+2 = %d.\n", (pulo+2));
    
   return 0;
}