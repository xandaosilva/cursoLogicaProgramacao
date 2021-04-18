#include <stdio.h>
#include <stdlib.h>

int main()
{

    int minutos;
    double valorTotal;

    printf("Digite a quantidade de minutos: ");
    scanf("%d", &minutos);

    if(minutos <= 100){
        valorTotal = 50;
    }
    else{
        valorTotal = ((minutos -100)*2) + 50;
    }

    printf("Valor a pagar: R$%.2lf\n", valorTotal);
    return 0;
}
