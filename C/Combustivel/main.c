#include <stdio.h>
#include <stdlib.h>

int main()
{

    int opcao, alcool, gasolina, diesel;

    printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
    scanf("%d", &opcao);

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while(opcao != 4){
        if(opcao == 1){
            alcool++;
        }
        else if(opcao == 2){
            gasolina++;
        }
        else if(opcao == 3){
            diesel++;
        }
        printf("Informe um codigo (1, 2, 3) ou 4 para parar: ");
        scanf("%d", &opcao);
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);
    return 0;
}
