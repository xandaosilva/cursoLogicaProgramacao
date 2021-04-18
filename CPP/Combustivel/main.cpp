#include <iostream>

using namespace std;

int main()
{
    int opcao, alcool, gasolina, diesel;

    cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
    cin >> opcao;

    alcool = 0;
    gasolina = 0;
    diesel = 0;

    while(opcao != 4){
        switch (opcao){
        case 1:
            alcool++;
            break;
        case 2:
            gasolina++;
            break;
        case 3:
            diesel++;
            break;
        }
        cout << "Informe um codigo (1, 2, 3) ou 4 para parar: ";
        cin >> opcao;
    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << alcool << endl;
    cout << "Gasolina: " << gasolina << endl;
    cout << "Diesel: " << diesel << endl;
    return 0;
}
