#include <iostream>

using namespace std;

int main()
{
    int n, soma;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    int mat[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    soma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i < j){
                soma = soma + mat[i][j];
            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma << endl;
    return 0;
}
