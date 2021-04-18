#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[50];
    double valorPorHora, pagamento;
    int horas;

    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome);
    printf("Valor por hora: ");
    scanf("%lf", &valorPorHora);
    printf("Horas trabalhadas: ");
    scanf("%d", &horas);

    pagamento = valorPorHora * horas;

    printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento);
    return 0;
}
