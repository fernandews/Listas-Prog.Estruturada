#include<stdio.h>
#include<math.h>
#include<string.h>

int main()
{
    int i=5, *p;
    p = &i;
    int a = 4094;
    printf("O resultado dessa questão se o endereço de memória fosse 4094(decimal) seria: \n");
    printf("%x %d %d \n", a, *p+2, 3**p);
    return 0;

}