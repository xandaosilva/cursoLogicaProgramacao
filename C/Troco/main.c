#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantidade;
    double precoUnitario, dinheiroRecebido, troco;

    printf("Preço unitário do produto: ");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada: ");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido: ");
    scanf("%lf", &dinheiroRecebido);

    troco = dinheiroRecebido - (precoUnitario * quantidade);

    printf("TROCO = %.2lf\n", troco);
    return 0;
}
