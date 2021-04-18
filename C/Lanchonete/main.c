#include <stdio.h>
#include <stdlib.h>

int main()
{

    int codigo, quantidade;
    double valorProduto, valorTotal;

    printf("Codigo do produto comprado: ");
    scanf("%d", &codigo);
    printf("Quantidade comprada:");
    scanf("%d", &quantidade);

    switch (codigo)
    {
        case 1:
            valorTotal = 5 * quantidade;
            break;
        case 2:
            valorTotal = 3.50 * quantidade;
            break;
        case 3:
            valorTotal = 4.80 * quantidade;
            break;
        case 4:
            valorTotal = 8.90 * quantidade;
            break;
        case 5:
            valorTotal = 7.32 * quantidade;
            break;
    }

    printf("Valor a pagar = R$%.2lf\n", valorTotal);
    return 0;
}
