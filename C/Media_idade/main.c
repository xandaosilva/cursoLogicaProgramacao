#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    int cont = 0;
    int soma = 0;
    double media;

    printf("Digite as idades:\n");
    scanf("%d", &idade);

    while(idade >= 0){
        soma = soma + idade;
        cont++;
        scanf("%d", &idade);
    }

    if(cont == 0){
        printf("IMPOSSIVEL CALCULAR\n");
    }
    else{
        media = (double) soma/cont;
        printf("MEDIA = %.2lf\n",media);
    }

    return 0;
}
