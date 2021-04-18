#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n, quantidade, totalCobaias, totalCoelhos, totalSapos, totalRatos;
    double pCoelhos, pRatos, pSapos;
    char tipo;

    printf("Quantos casos de teste serao digitados? ");
    scanf("%d", &n);

    totalCobaias = 0;
    totalCoelhos = 0;
    totalRatos = 0;
    totalSapos = 0;

    for(int i = 0; i < n; i++){
        printf("Quantidade de cobaias: ");
        scanf("%d", &quantidade);
        printf("Tipo de cobaia: ");
        scanf(" %c", &tipo);

        if(tipo == 'C'){
            totalCoelhos = totalCoelhos + quantidade;
        }
        else if(tipo == 'R'){
            totalRatos = totalRatos + quantidade;
        }
        else{
            totalSapos = totalSapos + quantidade;
        }
    }

    totalCobaias = totalCoelhos + totalRatos + totalSapos;

    pCoelhos = (((double) totalCoelhos/totalCobaias)*100);
    pRatos = (((double) totalRatos/totalCobaias)*100);
    pSapos = (((double) totalSapos/totalCobaias)*100);

    printf("\nRELATORIO FINAL:\n");
    printf("Total: %d cobaias\n", totalCobaias);
    printf("Total de coelhos: %d\n", totalCoelhos);
    printf("Total de ratos: %d\n", totalRatos);
    printf("Total de sapos: %d\n", totalSapos);
    printf("Percentual de coelhos: %.2lf\n", pCoelhos);
    printf("Percentual de ratos: %.2lf\n", pRatos);
    printf("Percentual de sapos: %.2lf\n", pSapos);
    return 0;
}
