#include <iostream>

using namespace std;

int main()
{
    int n, fatorial;

    cout << "Digite o valor de N: ";
    cin >> n;

    fatorial = 1;

    for(int i = n; i >= 1; i--){
        fatorial = fatorial * i;
    }

    cout << "FATORIAL = " << fatorial << endl;
    return 0;
}
