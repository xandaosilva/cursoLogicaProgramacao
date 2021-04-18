#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, soma;

    printf("Digite um numero inteiro: ");
    scanf("%d", &x);

    soma = 0;

    while(x != 0){
        if(x % 2 != 0){
            x++;
        }

        soma = 5 * x + 20;

        printf("SOMA = %d\n", soma);
        printf("Digite um numero inteiro: ");
        scanf("%d", &x);
    }
    return 0;
}
