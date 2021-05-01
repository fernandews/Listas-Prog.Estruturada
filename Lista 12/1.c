#include <stdio.h>

int mdc_recursiva(int a, int b) 
{ 
    printf("\n%d e %d", a, b); 
    if (a % b == 0) 
        return b; 
    
    return mdc_recursiva (b, a % b); 
} 

int main() 
{ 
    int a = 32, b = 18;  
    printf("Nessa questão, a cada chamada recursiva, ele calcula o número que é o maior divisor em comum entre a e b.\n");
    printf("Logo, nessa questão, o resultado esperado é 2.\n");
    printf("\nResultado = %d",mdc_recursiva(a, b)); 
} 

