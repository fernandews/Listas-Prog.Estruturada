#include<stdio.h>
#include<string.h>

main(void)
{ 
 char frase[80]="o rato roeu a roupa do rei de roma"; 
 char *p; 
 p = frase; 
 p[2]='m'; 
 p[6]='\0'; 

 //resposta do primeiro printf
 printf("Ele irá imprimir até 'o rato' mudando o 'r' pelo 'm' e terminando a frase ali.\n");

 printf("%s\n", frase); 

 //resposta do segundo printf
 printf("Ele irá imprimir da terceira  posição até o final da frase.\n");

 p = p + 3; 
 printf("%s\n",p); 

 // resposta do terceiro e último printf
 printf("Ele irá imprimir o tamanho da frase que após as mudanças ficou sendo só 'o mato', totalizando 6, pois o fim de frase também conta.\n");

 printf("%d\n",strlen(frase)); 
}  
