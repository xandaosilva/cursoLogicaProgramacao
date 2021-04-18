#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n;
    double soma, media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    cout << fixed << setprecision(1);
    cout << "\nVALORES = ";
    for(int i = 0; i < n; i++){
        cout << vet[i] << " ";
    }

    soma = 0;

    for(int i = 0; i < n; i++){
        soma = soma + vet[i];
    }

    media = soma/n;

    cout << fixed << setprecision(2);
    cout << "\nSOMA = " << soma << endl;
    cout << "MEDIA = " << media << endl;
    return 0;
}
