#include<stdio.h> 

void f1 ( int v) 
{ 
    v = v + 1;
    printf (" Nessa primeira função, ele pega o valor v e soma 1.\n"); 
    printf (" f1 = %d\n " , v ); 
} 

void f2 ( int *v) 
{ 
    *v = *v + 1; 
    printf (" Nessa segunda função, ele pega o valor v em ponteiro e soma 1.\n");
    printf (" f2 = %d\n " , *v ); 
} 

int f3 ( int v) 
{ 
    v = v + 1; 
    printf (" Nessa terceira função, ele pega o valor v (que depois de ter passado pela f2, está como v = 2) e soma 1.\n");
    printf (" f3 = %d\n " , v ); 
    return v; 
} 

int main (void) 
{ 
    int v = 1; 
    f1 ( v ); 
    f2 (&v ); 
    v = f3 ( v ); 
    printf (" main = %d \n" , v ); 
    return 0; 
} 



