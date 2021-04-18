#include <iostream>

using namespace std;

int main()
{

    int n, posicao;
    double maior;

    cout << "Quanto numeros voce vai digitar? ";
    cin >> n;

    double vet[n];

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vet[i];
    }

    maior = vet[0];
    posicao = 0;

    for(int i = 1; i < n; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posicao = i;
        }
    }
    cout << "\nMAIOR VALOR = " << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicao << endl;

    return 0;
}
