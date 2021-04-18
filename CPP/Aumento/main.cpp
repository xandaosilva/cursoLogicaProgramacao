#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    double salario, novoSalario, aumento;
    int porcentagem;

    cout << "Digite o salario da pessoa: ";
    cin >> salario;

    if(salario <= 1000.00){
        porcentagem = 20;
    }
    else if(salario <= 3000.00){
        porcentagem = 15;
    }
    else if(salario <= 8000.00){
        porcentagem = 10;
    }
    else{
        porcentagem = 5;
    }

    aumento = (salario*porcentagem)/100.0;
    novoSalario = salario + aumento;

    cout << fixed << setprecision(2);
    cout << "Novo salario = R$" << novoSalario << endl;
    cout << "Aumento = R$" << aumento << endl;
    cout << "Porcentagem = " << porcentagem << "%" << endl;
    return 0;
}
