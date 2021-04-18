#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salario, novoSalario, aumento;
    int porcentagem;

    printf("Digite o salario da pessoa: ");
    scanf("%lf", &salario);

    if(salario <= 1000){
        porcentagem = 20;
    }
    else if(salario <= 3000){
        porcentagem = 15;
    }
    else if(salario <= 8000){
        porcentagem = 10;
    }
    else{
        porcentagem = 5;
    }

    aumento = ((salario*porcentagem)/100);
    novoSalario = salario + aumento;

    printf("Novo salario = R$%.2lf\n", novoSalario);
    printf("Aumento = R$%.2lf\n", aumento);
    printf("Porcentagem = %d %%\n", porcentagem);
    return 0;
}
