#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b, c, maior;

    cout << "Digite as tres distancias: " << endl;
    cin >> a >> b >> c;

    if(a > b && a > c){
        maior = a;
    }
    else if(b > c){
        maior = b;
    }
    else{
        maior = c;
    }

    cout << fixed << setprecision(2);
    cout << "MAIOR DISTANCIA = " << maior << endl;
    return 0;
}
