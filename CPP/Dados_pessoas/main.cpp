#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n, quantidadeHomens, quantidadeMulheres;
    double maiorAltura, menorAltura, somaAlturaMulheres, mediaAlturaMulheres;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    double alturas[n];
    char generos[n];


    for(int i = 0; i < n; i++){
        cout << "Altura da " << i + 1 << "a pessoa:";
        cin >> alturas[i];
        cout << "Genero da " << i + 1 << "a pessoa:";
        cin >> generos[i];
    }

    maiorAltura = alturas[0];
    menorAltura = alturas[0];
    for(int i = 0; i < n; i++){
        if(alturas[i] > maiorAltura){
            maiorAltura = alturas[i];
        }

        if(alturas[i] < menorAltura){
            menorAltura = alturas[i];
        }
    }


    somaAlturaMulheres = 0;
    quantidadeMulheres = 0;
    quantidadeHomens = 0;
    for(int i = 0; i < n; i++){
        if(generos[i] == 'F'){
            somaAlturaMulheres = somaAlturaMulheres + alturas[i];
            quantidadeMulheres++;
        }
        else{
            quantidadeHomens++;
        }
    }

    mediaAlturaMulheres = somaAlturaMulheres/quantidadeMulheres;

    cout << fixed << setprecision(2);
    cout << "Menor altura = " << menorAltura << endl;
    cout << "Maior altura = " << maiorAltura << endl;
    cout << "Media das alturas das mulheres = " << mediaAlturaMulheres << endl;
    cout << "Numero de homens = " << quantidadeHomens << endl;
    return 0;
}
