#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    double largura, comprimento, valorMetro, area, valorTotal;

    cout << "Digite a largura do terreno: ";
    cin >> largura;

    cout << "Digite o comprimento do terrno: ";
    cin >> comprimento;

    cout << "Digite o valor do metro quadrado:";
    cin >> valorMetro;

    area = largura * comprimento;
    valorTotal = valorMetro * comprimento;

    cout << "Area do terreno = " << area << endl;
    cout << fixed << setprecision(2);
    cout << "Preco do terreno = " << valorTotal << endl;

    return 0;
}
