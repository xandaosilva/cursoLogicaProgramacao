#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, negativos;

    printf("Qual a ordem da matriz? ");
    scanf("%d", &n);

    int mat[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("Elemento [%d,%d]:", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Diagonal principal :\n");

    for(int i = 0; i < n; i++){
        printf("%d ", mat[i][i]);
    }

    negativos = 0;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] < 0){
                negativos++;
            }
        }
    }
    printf("\nQUANTIDADE DE NEGATIVOS = %d\n", negativos);
    return 0;
}
