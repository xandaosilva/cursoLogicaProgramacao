#include <iostream>

using namespace std;

int main()
{
    int linhas, colunas;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> linhas;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> colunas;

    double matA[linhas][colunas], matB[linhas][colunas], matC[linhas][colunas];

    cout << "Digite os os valores da matriz A:" << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Elemento [" << i << "," << j  <<"]:";
            cin >> matA[i][j];
        }
    }

    cout << "Digite os os valores da matriz B:" << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Elemento [" << i << "," << j  <<"]:";
            cin >> matB[i][j];
        }
    }

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    cout << "MATRIZ SOMA:" << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << matC[i][j] << " ";
        }
        cout << "\n";
    }


    return 0;
}
