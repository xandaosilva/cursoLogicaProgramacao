#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int idade, quantidade, soma;
    double media;

    cout << "Digite as idades:" << endl;
    cin >> idade;

    soma = 0;
    quantidade = 0;

    while(idade >= 0){
        soma = soma + idade;
        quantidade++;
        cin >> idade;
    }

    cout << fixed << setprecision(2);

    if(quantidade > 0){
        media = (double) soma/quantidade;
        cout << "MEDIA = " << media << endl;
    }
    else{
        cout << "IMPOSSIVEL CALCULAR" << endl;
    }

    return 0;
}
