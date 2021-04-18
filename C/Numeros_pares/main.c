#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, quantidade;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    quantidade = 0;
    printf("\nNUMEROS PARES:\n");
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
            printf("%d ", vet[i]);
            quantidade++;
        }
    }

    printf("\nQUANTIDADE DE PARES = %d\n", quantidade);
    return 0;
}
