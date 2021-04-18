#include <stdio.h>
#include <stdlib.h>

int main()
{

    double precoUnitario, dinheiro, total, troco, diferenca;
    int quantidade;

    printf("Preco unitario do produto :");
    scanf("%lf", &precoUnitario);
    printf("Quantidade comprada :");
    scanf("%d", &quantidade);
    printf("Dinheiro recebido :");
    scanf("%lf", &dinheiro);

    total = precoUnitario * quantidade;

    if(total <= dinheiro){
        troco = dinheiro - total;
        printf("TROCO = %.2lf\n", troco);
    }
    else{
        diferenca = total - dinheiro;
        printf("DINHEIRO INSUFICIENTE. FALTAM %.2lf REAIS\n", diferenca);
    }

    return 0;
}
