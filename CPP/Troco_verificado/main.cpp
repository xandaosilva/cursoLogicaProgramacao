#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double precoUnitario, dinheiro, valorTotal, troco, falta;
    int quantidade;

    cout << "Preço unitário do produto: ";
    cin >> precoUnitario;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    valorTotal = precoUnitario * quantidade;

    if(valorTotal > dinheiro){
        falta = valorTotal - dinheiro;
        cout << fixed << setprecision(2);
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << falta << " REAIS" << endl;
    }
    else{
        troco = dinheiro - valorTotal;
        cout << fixed << setprecision(2);
        cout << "TROCO = " << troco << endl;
    }
    return 0;
}
