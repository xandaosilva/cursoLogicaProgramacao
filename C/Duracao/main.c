#include <stdio.h>
#include <stdlib.h>

int main()
{

    int duracao, horas, minutos, segundos, resto;

    printf("Digite a duracao em segundos:");
    scanf("%d", &duracao);

    horas = duracao/3600;
    resto = duracao%3600;
    minutos = resto/60;
    segundos = resto%60;

    printf("%d:%d:%d\n", horas, minutos, segundos);
    return 0;
}
