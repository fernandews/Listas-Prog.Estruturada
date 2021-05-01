#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#include<stdlib.h>

int *aprovados(int n, int *mat, float *notas, int *tam)
{
    //Parte 1: Contar o número de alunos aprovados (media/nota final superior ou igual a 5);

    int num_aprovados = 0;
            
    int b;   
    for (b = 0; b < n; b++)
    {
        if (notas[b] >= 5)
        {
            num_aprovados += 1;   
        }
    }
    
    //Parte 2: Criar um vetor alocado dinamicamente que recebe as matrículas dos alunos acima da média;

    int *alunos_aprovados; //ponteiro que receberá a alocação;    
    alunos_aprovados = (int *) malloc( *tam * sizeof(int));

    if (alunos_aprovados == NULL) 
    {
        printf("Falta de memória\n");
        exit(1);
    }

        //Adicionando as matrículas acima da média dentro do vetor alocado(alunos_aprovados);
    int c;
    int d = 0;

    for ( c = 0; c < n; c++)
    {
        if (notas[c] >= 5)
        {
            alunos_aprovados[d] = mat[c];
            d += 1;
        }   
    }

    //Parte 3: Armazenar o tamanho do vetor alocado(alunos_aprovados) em 'tam';
    tam = &num_aprovados;

    //Parte 4: Printar as matrículas dos alunos aprovados;
    printf("As matrículas dos alunos com nota final acima da média são:\n");

    int i;
    for ( i = 0; i < num_aprovados; i++)
    {
        printf("%d\n", alunos_aprovados[i]);               
    }

    //Parte 5: Limpar a alocação dinâmica;
    free(alunos_aprovados);
}


int main()
{
    //Teste com valores do usuário;

    int n_alunos, *matriculas, *tam;
    float *notas_finais;

    //Pede para o usuário digitar a quantidade de alunos na turma 
    printf("Digite a quantidade de alunos da turma:\n");
    scanf("%d", &n_alunos);

    //Declara as variáveis que serão vetores alocados;
    matriculas = (int *) malloc( n_alunos * sizeof(int));
    notas_finais = (float *) malloc( n_alunos * sizeof(float));

    
    printf("Digite as matrículas e notas finais dos alunos:\n");
    
    int a;
    for (a = 0; a < n_alunos; a++)
    {
        printf("Digite a matrícula de um aluno:\n");
        scanf("%d", &matriculas[a]);
        
        printf("Digite a nota final desse aluno:\n");
        scanf("%f", &notas_finais[a]);
    }
    
    aprovados(n_alunos, matriculas, notas_finais, tam);   

    free(matriculas);
    free(notas_finais);
    return 0;
}