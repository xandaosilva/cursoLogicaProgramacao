#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double valorTotal;
    int minutos;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if(minutos <= 100){
        valorTotal = 50.00;
    }
    else{
        valorTotal = 50 + ((minutos - 100)*2);
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valorTotal << endl;
    return 0;
}
