#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, posicao;
    double maior;

    printf("Quantos numeros voce vai digitar? ");
    scanf("%d", &n);

    double vet[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    maior = vet[0];
    posicao = 0;
    for(int i = i; i < n; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }

    printf("\nMAIOR VALOR = %.1lf\n", maior);
    printf("POSICAO DO MAIOR VALOR = %d\n",posicao);
    return 0;
}
