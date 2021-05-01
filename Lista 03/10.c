// Implemente um programa que chame a função média com o seguinte protótipo:
// float media(int n, float *v)

#include <stdio.h>

float media(int n, float *v) {
    float sum = 0;
    float media;

    for (size_t i = 0; i < n; i++) {
        sum = sum + v[i];
    };

    media = sum / n;

    return media;
}

int main() {
// gerando um vetor com as notas
    float vnotas[3];
    for (size_t i = 0; i < 3; i++) {
        printf("Insira a %d° nota: ", i + 1);
        scanf("%f", &vnotas[i]);
    }

    printf("Media = %.2f", media(3, vnotas));
    
    return 0;
}