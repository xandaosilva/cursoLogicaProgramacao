#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &x);

        if(x == 0){
            printf("NULO\n");
        }
        else if(x < 0){
            if(x % 2 != 0){
                printf("IMPAR NEGATIVO\n");
            }
            else{
                printf("PAR NEGATIVO\n");
            }
        }
        else{
            if(x % 2 != 0){
                printf("IMPAR POSITIVO\n");
            }
            else{
                printf("PAR POSITIVO\n");
            }
        }
    }
    return 0;
}
