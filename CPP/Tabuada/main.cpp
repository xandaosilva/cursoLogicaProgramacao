#include <iostream>

using namespace std;

int main()
{

    int n, resposta;

    cout << "Deseja a tabuada para qual valor? ";
    cin >> n;

    for(int i = 1; i <= 10; i++){
        resposta = n * i;
        cout << n << " X " << i << " = " << resposta << endl;
    }

    return 0;
}
