// Faça um programa que dado 2 palavras, determine:
// a. Se as palavras são iguais;
// b. Verifique se a segunda palavra é uma sub string da primeira. Ex: casa e casamento.

#include <stdio.h>
#include <string.h>

int procuraString (char *string1, char *string2) {
    int len = strlen(string2);
    char *p;
    int i;
    char copy[20];

    for(i = 0; i<len;i++){
        p = strchr(string1, string2[i]);
        copy[i]= *p;
    }

    copy[len] = '\0';

    if(!strcmp(copy, string2)) {
        return 1;
    }
    else {
	  return 0;
    }
}

int main() {
    char str1[20] = "gastronomia";
    char str2[20] = "astro";

    int ret = strcmp(str1, str2);

    if (ret == 0) {
        printf("As strings sao iguais. \n");
    }
    else {
        printf("As strings sao diferentes. \n");
    }  
   
   if (procuraString(str1, str2) == 1) {
       printf("%s e substring de %s. \n", str2, str1);
   }
   else {
       printf("%s nao e substring de %s. \n", str2, str1);
   }
   
    return 0;
}