#include <iostream>

using namespace std;

int main()
{

    int n, x, dentro, fora;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    dentro = 0;
    fora = 0;

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> x;

        if(x >= 10 && x <= 20){
            dentro++;
        }
        else{
            fora++;
        }
    }

    cout << dentro << " DENTRO" << endl;
    cout << fora << " FORA" << endl;
    return 0;
}
