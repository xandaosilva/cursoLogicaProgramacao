#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, ratos, sapos, coelhos, quantidade, totalCobaias;
    char tipo;
    double pRatos, pSapos, pCoelhos;

    cout << "Quantos casos de teste serao digitados? ";
    cin >> n;

    ratos = 0;
    sapos = 0;
    coelhos = 0;
    pRatos = 0.00;
    pSapos = 0.00;
    pCoelhos = 0.00;

    for(int i = 0; i < n; i++){
        cout << "Quantidade de cobaias: ";
        cin >> quantidade;
        cout << "Tipo de cobaia: ";
        cin >> tipo;

        switch (tipo){
        case 'C':
            coelhos = coelhos + quantidade;
            break;
        case 'R':
            ratos = ratos + quantidade;
            break;
        case 'S':
            sapos = sapos + quantidade;
            break;
        }
    }

    totalCobaias = ratos + sapos + coelhos;
    pCoelhos = ((double) coelhos/totalCobaias)*100.0;
    pRatos = ((double) ratos/totalCobaias)*100.0;
    pSapos = ((double) sapos/totalCobaias)*100.0;

    cout << fixed << setprecision(2);
    cout << "\n\nRELATORIO FINAL:" << endl;
    cout << "Total: " << totalCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << coelhos << endl;
    cout << "Total de ratos: " << ratos << endl;
    cout << "Total de sapos: " << sapos << endl;
    cout << "Percentual de coelhos: " << pCoelhos << endl;
    cout << "Percentual de ratos: " << pRatos << endl;
    cout << "Percentual de sapos: " << pSapos << endl;
    return 0;
}
