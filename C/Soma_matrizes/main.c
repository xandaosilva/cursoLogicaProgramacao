#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m, n;

    printf("Qual a quantidade de linhas da matriz? ");
    scanf("%d", &m);
    printf("Qual a quantidade de colunas da matriz? ");
    scanf("%d", &n);

    int matA[m][n], matB[m][n], matSoma[m][n];

    printf("Digite os valores da matriz A:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matA[i][j]);
        }
    }

    printf("Digite os valores da matriz B:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("Elemento [%d,%d]: ", i, j);
            scanf("%d", &matB[i][j]);
        }
    }

    printf("MATRIZ SOMA:\n");
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            matSoma[i][j] = matA[i][j] + matB[i][j];
        }
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            printf("%d ", matSoma[i][j]);
        }
        printf("\n");
    }
    return 0;
}
