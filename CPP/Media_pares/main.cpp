#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, somaPares, quantidadePares;
    double media;

    cout << "Quantos elementos vai ter o vetor? ";
    cin >> n;

    int vet[n];

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    somaPares = 0;
    quantidadePares = 0;
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
            somaPares = somaPares + vet[i];
            quantidadePares++;
        }
    }

    if(quantidadePares == 0){
        cout << "NENHUM NUMERO PAR";
    }
    else{
        media = somaPares/quantidadePares;
        cout << fixed << setprecision(1);
        cout << "MEDIA DOS PARES = " << media << endl;
    }

    return 0;
}
