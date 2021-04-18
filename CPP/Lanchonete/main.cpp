#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int codigo, quantidade;
    double total;


    cout << "Codigo do produto comprado: ";
    cin >> codigo;
    cout << "Quantidade comprada: ";
    cin >> quantidade;

    switch (codigo)
    {
        case 1:
            total = quantidade * 5.00;
            break;
        case 2:
            total = quantidade * 3.50;
            break;
        case 3:
            total = quantidade * 4.80;
            break;
        case 4:
            total = quantidade * 8.90;
            break;
        case 5:
            total = quantidade * 7.32;
            break;
    }

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$" << total << endl;
    return 0;
}
