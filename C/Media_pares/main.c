#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, quantidadePares;
    double soma, media;

    printf("Quantos elementos vai ter o vetor? ");
    scanf("%d", &n);

    int vet[n];

    for(int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%d", &vet[i]);
    }

    soma = 0;
    quantidadePares = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
            soma = soma + vet[i];
            quantidadePares++;
        }
    }

    if(quantidadePares == 0){
        printf("NENHUM NUMERO PAR\n");
    }
    else{
        media = (double) soma/quantidadePares;
        printf("MEDIA DOS PARES = %.1lf\n", media);
    }

    return 0;
}
