#include <stdio.h>

void lerMatriz(int mat[25][25], int m, int n) {
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    return; 
}

void somarMatrizes (int a[25][25], int b[25][25], int c[25][25], int m, int n) {
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    return;
}

void escreverMatriz(int mat[25][25], int m, int n) {
    for (size_t i = 0; i < m; i++) {
        for (size_t j = 0; j < n; j++) {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }

    return;    
}

int main() {
    int m, n, m1[25][25], m2[25][25], m3[25][25];

    printf("Informe o numero de linhas: ");
    scanf("%d", &m);

    printf("Informe o numero de colunas: ");
    scanf("%d", &n);

    if (m < 25 && n < 25) {
        printf("Digite os valores da primeira matriz: \n");
        lerMatriz(m1, m, n);

        printf("Digite os valores da segunda matriz: \n");
        lerMatriz(m2, m, n);
        
        printf("\n");
        
        somarMatrizes(m1, m2, m3, m, n);
        
        printf("A soma das matrizes é: \n");
        escreverMatriz(m3, m, n);
    }
    else{
        printf("Matriz muito grande \n");
    }

    return 0;
}