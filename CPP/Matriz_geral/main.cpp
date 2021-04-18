#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    int n, linha, coluna;
    double somaPositivos;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double mat[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    somaPositivos = 0;
    cout << fixed << setprecision(1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] > 0){
                somaPositivos = somaPositivos + mat[i][j];
            }
        }
    }

    cout << "\nSOMA DOS POSITIVOS: " << somaPositivos << endl;
    cout << "\nEscolha uma linha: ";
    cin >> linha;
    cout << "LINHA ESCOLHIDA: ";
    for(int i = 0; i < n; i++){
        cout << mat[linha][i] << " ";
    }

    cout << "\n\nEscolha uma coluna: ";
    cin >> coluna;
    cout << "COLUNA ESCOLHIDA: ";
    for(int i = 0; i < n; i++){
        cout << mat[i][coluna] << " ";
    }

    cout << "\n\nDIAGONAL PRINCIPAL: ";
    for(int i = 0; i < n; i++){
        cout << mat[i][i] << " ";
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mat[i][j] < 0){
                mat[i][j] = pow(mat[i][j],2);
            }
        }
    }

    cout << "\n\nMATRIZ ALTERADA: " << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
