#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n;
    double a, b, c, media;

    cout << "Quantos casos voce vai digitar? ";
    cin >> n;

    cout << fixed << setprecision(1);

    for(int i = 0; i < n; i++){
        media = 0;
        cout << "Digite tres numeros: " << endl;
        cin >> a >> b >> c;

        media = (((a*2.0)+(b*3.0)+(c*5.0))/10.0);
        cout << "MEDIA = " << media << endl;
    }

    return 0;
}
