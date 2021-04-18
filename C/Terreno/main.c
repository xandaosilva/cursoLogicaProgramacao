#include <stdio.h>
#include <string.h>
void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}
void ler_texto(char *buffer, int length)
{
    fgets(buffer, length, stdin);
    strtok(buffer, "\n");
}
int main()
{
    double largura, comprimento, valor, area, preco;

    printf("Digite a largura do terreno:");
    scanf("%lf", &largura);

    printf("Digite o comprimento do terreno:");
    scanf("%lf", &comprimento);

    printf("Digite o valor do metro quadrado:");
    scanf("%lf", &valor);

    area = largura * comprimento;
    preco = area * valor;

    printf("Area do terreno = %.2lf\n", area);
    printf("Preco do terreno = %.2lf\n", preco);

    return 0;
}
