#include <iostream>
#include <iomanip>
using namespace std;

int main()
{

    int n, lucroAbaixo, lucroEntre, lucroAcima;
    double totalCompra, totalVenda, lucroTotal;

    cout << "Serao digitados dados de quantos produtos? ";
    cin >> n;

    string nomes[n];
    double precoCompra[n], precoVenda[n], porcentagemLucros[n];

    for(int i = 0; i < n; i++){
        cout << "Produto: " << i + 1 << endl;
        cout << "Nome: ";
        cin >> nomes[i];
        cout << "Preco de compra: ";
        cin >> precoCompra[i];
        cout << "Preco de venda: ";
        cin >> precoVenda[i];
    }

    for(int i = 0; i < n; i++){
        porcentagemLucros[i] = (precoVenda[i] - precoCompra[i])/ precoVenda[i] * 100.0;
    }


    lucroAbaixo = 0;
    lucroEntre = 0;
    lucroAcima = 0;
    for(int i = 0; i < n; i++){
        if(porcentagemLucros[i] < 10){
            lucroAbaixo++;
        }
        else if(porcentagemLucros[i] <= 20){
            lucroEntre++;
        }
        else{
            lucroAcima++;
        }
    }


    totalCompra = 0;
    totalVenda = 0;
    lucroTotal = 0;
    for(int i = 0; i < n; i++){
        totalCompra = totalCompra + precoCompra[i];
        totalVenda = totalVenda + precoVenda[i];
    }

    lucroTotal = totalVenda - totalCompra;

    cout << "RELATORIO:" << endl;
    cout << "Lucro abaixo de 10%: " << lucroAbaixo << endl;
    cout << "Lucro entre 10% e 20%: " << lucroEntre << endl;
    cout << "Lucro acima de 20%: " << lucroAcima << endl;
    cout << fixed << setprecision(2);
    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor total de venda: " << totalVenda << endl;
    cout << "Lucro total: " << lucroTotal << endl;

    return 0;
}
