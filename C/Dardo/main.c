#include <stdio.h>
#include <stdlib.h>

int main()
{

    double a, b, c, maior;

    printf("Digite as tres distancias:\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    if(a > b && a > c){
        maior = a;
    }
    else if(b > c){
        maior = b;
    }
    else{
        maior = c;
    }

    printf("MAIOR DISTANCIA = %.2lf\n", maior);
    return 0;
}
