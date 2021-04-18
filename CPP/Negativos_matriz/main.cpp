#include <iostream>

using namespace std;

int main()
{
    int linhas, colunas;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> linhas;
    cout << "Qual a quantidade de colunas da matriz? ";
    cin >> colunas;

    double mat[linhas][colunas];

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "VALORES NEGATIVOS:" << endl;
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(mat[i][j] < 0){
                cout << mat[i][j] << endl;
            }
        }
    }
    return 0;
}
