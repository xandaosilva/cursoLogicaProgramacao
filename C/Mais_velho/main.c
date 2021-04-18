#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, maisVelho, posicao;

    printf("Quantas pessoas voce vai digitar? ");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];

    for(int i = 0; i < n; i++){
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        scanf("%s", &nomes[i][0]);
        printf("Idade: ");
        scanf("%d", &idades[i]);
    }

    maisVelho = idades[0];
    posicao = 0;

    for(int i = 0; i < n; i++){
        if(idades[i] > maisVelho){
            maisVelho = idades[i];
            posicao = i;
        }
    }

    printf("PESSOA MAIS VELHA: %s\n", nomes[posicao]);

    return 0;
}
