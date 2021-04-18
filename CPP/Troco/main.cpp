#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double precoUnitario, dinheiro, valorTotal, troco;
    int quantidade;

    cout << "Preço unitário do produto: ";
    cin >> precoUnitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    troco = dinheiro - (precoUnitario * quantidade);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;
    return 0;
}
