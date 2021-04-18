#include <iostream>

using namespace std;

int main()
{

    int n, quantidadePares;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vet[n];

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    quantidadePares = 0;
    cout << "\nNUMEROS PARES:" << endl;
    for(int i = 0; i < n; i++){
        if(vet[i] % 2 == 0){
            quantidadePares++;
            cout << vet[i] << " ";
        }
    }

    cout << "\n\nQUANTIDADE DE PARES = " << quantidadePares << endl;

    return 0;
}
