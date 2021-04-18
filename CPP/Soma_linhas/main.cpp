#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int linhas, colunas;
    double somaLinhas;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> linhas;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> colunas;

    double mat[linhas][colunas], vet[linhas];

    for(int i = 0; i < linhas; i++){
        cout << "Digite os elementos da " << i + 1 << "a linha:" << endl;
        for(int j = 0; j < colunas; j++){
            cin >> mat[i][j];
        }
    }

    for(int i = 0; i < linhas; i++){
        somaLinhas = 0;
        for(int j = 0; j < colunas; j++){
            somaLinhas = somaLinhas + mat[i][j];
        }
        vet[i] = somaLinhas;
    }

    cout << fixed << setprecision(1);
    cout << "VETOR GERADO:" << endl;
    for(int i = 0; i < linhas; i++){
        cout << vet[i] << endl;
    }

    return 0;
}
