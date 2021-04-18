#include <iostream>

using namespace std;

int main()
{

    double glicose;

    cout << "Digite a medida da glicose: ";
    cin >> glicose;

    if(glicose <= 100){
        cout << "normal" << endl;
    }
    else if(glicose <= 140){
        cout << "elevado" << endl;
    }
    else{
        cout << "diabetes" << endl;
    }

    return 0;
}
