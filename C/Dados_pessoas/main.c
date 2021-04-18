#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, homens, mulheres;
    double menoraltura, maioraltura, alturafemMedia, alturafemtotal;

    printf("Quantas pessoas serao digitadas? ");
    scanf("%d", &n);

    double alturas[n];
    char generos[n];

    for(int i = 0; i < n; i++){
        printf("Altura da 1a pessoa: ");
        scanf("%lf", &alturas[i]);
        printf("Genero da 1a pessoa: ");
        scanf(" %c", &generos[i]);
    }

    menoraltura = alturas[0];
    maioraltura = alturas[0];

    for(int i = 1; i < n; i++){
        if(alturas[i] < menoraltura){
            menoraltura = alturas[i];
        }

        if(alturas[i] > maioraltura){
            maioraltura = alturas[i];
        }
    }

    homens = 0;
    mulheres = 0;
    alturafemtotal = 0;
    for(int i = 0; i < n; i++){
        if(generos[i] == 'M'){
            homens++;
        }
        else{
            mulheres++;
            alturafemtotal = alturafemtotal + alturas[i];
        }
    }

    alturafemMedia = alturafemtotal/mulheres;

    printf("Menor altura = %.2lf\n", menoraltura);
    printf("Maior altura = %.2lf\n", maioraltura);
    printf("Media das alturas das mulheres = %.2lf\n", alturafemMedia);
    printf("Numero de homens = %d\n", homens);
    return 0;
}
