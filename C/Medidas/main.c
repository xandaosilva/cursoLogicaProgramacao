#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{

    double a, b, c, areaQuadrado, areaTriangulo, areaTrapezio;

    printf("Digite a medida A: ");
    scanf("%lf", &a);
    printf("Digite a medida B: ");
    scanf("%lf", &b);
    printf("Digite a medida C: ");
    scanf("%lf", &c);

    areaQuadrado = pow(a,2);
    areaTriangulo = ((a*b)/2);
    areaTrapezio = (((a+b)*c)/2);

    printf("AREA DO QUADRADO = %.4lf\n", areaQuadrado);
    printf("AREA DO TRIANGULO = %.4lf\n", areaTriangulo);
    printf("AREA DO TRAPEZIO = %.4lf\n", areaTrapezio);
    return 0;
}
