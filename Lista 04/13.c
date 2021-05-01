#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void estatistica_texto(int num, char *vetor)
{
    int contA = 0, contB = 0, contC = 0, contD = 0, contE = 0, contF = 0,contG = 0, contH = 0, contI = 0, contJ = 0,contK = 0, contL = 0, contM = 0, branco = 0;
    int contN = 0, contO = 0,contP = 0, contQ = 0, contR = 0, contS = 0, contT = 0, contU  = 0, contV = 0, contW = 0, contX = 0,contY = 0, contZ = 0;

    int ab;
    for (ab = 0; ab < num; ab++)
    {
        if (vetor[ab] == 'A')
        {
            contA += 1;
        }
        
        if (vetor[ab] == 'B')
        {
            contB += 1;
        }
        if (vetor[ab] == 'C')
        {
            contC += 1;
        }
        if (vetor[ab] == 'D')
        {
            contD += 1;
        }
        if (vetor[ab] == 'E')
        {
            contE += 1;
        }
        if (vetor[ab] == 'F')
        {
            contF += 1;
        }
        if (vetor[ab] == 'G')
        {
            contG += 1;
        }
        if (vetor[ab] == 'H')
        {
            contH += 1;
        }
        if (vetor[ab] == 'I')
        {
            contI += 1;
        }
        if (vetor[ab] == 'J')
        {
            contJ += 1;
        }
        if (vetor[ab] == 'K')
        {
            contK += 1;
        }
        if (vetor[ab] == 'L')
        {
            contL += 1;
        }
        if (vetor[ab] == 'M')
        {
            contM += 1;
        }
        if (vetor[ab] == 'N')
        {
            contN += 1;
        }
        if (vetor[ab] == 'O')
        {
            contO += 1;
        }
        if (vetor[ab] == 'P')
        {
            contP += 1;
        }
        if (vetor[ab] == 'Q')
        {
            contQ += 1;
        }
        if (vetor[ab] == 'R')
        {
            contR += 1;
        }
        if (vetor[ab] == 'S')
        {
            contS += 1;
        }
        if (vetor[ab] == 'T')
        {
            contT += 1;
        }
        
        if (vetor[ab] == 'U')
        {
            contU += 1;
        }
        if (vetor[ab] == 'V')
        {
            contV += 1;
        }
        if (vetor[ab] == 'W')
        {
            contW += 1;
        }
        if (vetor[ab] == 'X')
        {
            contX += 1;
        }
        if (vetor[ab] == 'Y')
        {
            contY += 1;
        }
        
        if (vetor[ab] == 'Z')
        {
            contZ += 1;
        }  
    
        if (vetor[ab] == ' ')
        {
            branco += 1;
        }
    }
    
    if (contA != 0)
    {
        printf(" 'A' = %d;\n",contA);
    }
        
    if (contB != 0)
    {
        printf(" 'B' = %d;\n",contB);
    }
        
    if (contC != 0)
    {
        printf(" 'C' = %d;\n",contC);
    }
    
    if (contD != 0)
    {
        printf(" 'D' = %d;\n",contD);
    }
    if (contE != 0)
    {
        printf(" 'E' = %d;\n",contE);
    }
    if (contF != 0)
    {
        printf(" 'F' = %d;\n",contF);
    }
    if (contG != 0)
    {
        printf(" 'G' = %d;\n",contG);
    }
    if (contH != 0)
    {
        printf(" 'H' = %d;\n",contH);
    }
    if (contI != 0)
    {
        printf(" 'I' = %d;\n",contI);
    }
    if (contJ != 0)
    {
        printf(" 'J' = %d;\n",contJ);
    }
    if (contK != 0)
    {
        printf(" 'K' = %d;\n",contK);
    }
    if (contL != 0)
    {
        printf(" 'L' = %d;\n",contL);
    }
    if (contM != 0)
    {
        printf(" 'M' = %d;\n",contM);
    }
    if (contN != 0)
    {
        printf(" 'N' = %d;\n",contN);
    }
    if (contO != 0)
    {
        printf(" 'O' = %d;\n",contO);
    }
    if (contP != 0)
    {
        printf(" 'P' = %d;\n",contP);
    }
    if (contQ != 0)
    {
        printf(" 'Q' = %d;\n",contQ);
    }
    if (contR != 0)
    {
        printf(" 'R' = %d;\n",contR);
    }
    if (contS != 0)
    {
        printf(" 'S' = %d;\n",contS);
    }
    if (contT != 0)
    {
        printf(" 'T' = %d;\n",contT);
    }
    if (contU != 0)
    {
        printf(" 'U' = %d;\n",contU);
    }
    if (contV != 0)
    {
        printf(" 'V' = %d;\n",contV);
    }
    if (contW != 0)
    {
        printf(" 'W' = %d;\n",contW);
    }
    if (contX != 0)
    {
        printf(" 'X' = %d;\n",contX);
    }
    if (contY != 0)
    {
        printf(" 'Y' = %d;\n",contY);
    }
    if (contZ != 0)
    {
        printf(" 'Z' = %d;\n",contZ);
    }
    
    if (branco != 0)
    {
        printf(" ' ' = %d;\n",branco);
    }
    
}


int main()
{
    
    printf("Seu texto deve ser escrito em letra maiúscula e deve ter no máximo 50 caracteres. ");
        
    printf("Digite-o a seguir:\n");
    char v[51];
    v[50] ='\0';

    int i;
    for (i = 0; i < 50; i++)
    {
        scanf("%c",&v[i]);

        if (v[i] == '\n')
        {
            v[i] = '\0';
            break;
        }
    
    }
    
    estatistica_texto(strlen(v), v);
    
    return 0;
}