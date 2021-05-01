#include<stdio.h>
#include<math.h>
#include<string.h>

float calc_circulo(float r, float *c, float *a)
{
    const float PI = 3.14159265;

    *c = ( 2 * PI * r);
            
    *a = PI * (pow(r,2)) ; 
    
}

int main()
{   
    float r, ar, cir;
    
    printf("Digite um valor para o raio:\n");
    scanf("%f",&r);

    /*Definição das variáveis do cálculo e dos seus respectivos ponteiros*/

    
    float *circunferencia, *area;
    circunferencia = &cir;
    area = &ar;

    /*Chamada da função e impressão do resultado*/
    calc_circulo(r, circunferencia, area);

    printf("O valor da area é de %0.2f e o valor da circunferência é de %0.2f\n",ar ,cir);        
    return 0;
}

