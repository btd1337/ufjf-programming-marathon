#include <iostream>
 
using namespace std;
 
int main() {
 
    double valueTot;
    int qtde,value,aux;

    cin >> valueTot;
    value = valueTot;

    cout << "NOTAS:" << endl;
    qtde = value/100;
    cout << qtde << " nota(s) de R$ 100.00" << endl;
    value %= 100;
    qtde = value/50;
    cout << qtde << " nota(s) de R$ 50.00" << endl;
    value %= 50;
    qtde = value/20;
    cout << qtde << " nota(s) de R$ 20.00" << endl;
    value %= 20;
    qtde = value/10;
    cout << qtde << " nota(s) de R$ 10.00" << endl;
    value %= 10;
    qtde = value/5;
    cout << qtde << " nota(s) de R$ 5.00" << endl;
    value %= 5;
    qtde = value/2;
    cout << qtde << " nota(s) de R$ 2.00" << endl;
    value %= 2;
    cout << "MOEDAS:" << endl;
    qtde = value/1;
    cout << qtde << " moeda(s) de R$ 1.00" << endl;

    value = valueTot;
    valueTot*=100;
    aux=valueTot;
    value = aux%value;


    value %=100;
    qtde = value/50;
    cout << qtde << " moeda(s) de R$ 0.50" << endl;
    value %=50;
    qtde = value/25;
    cout << qtde << " moeda(s) de R$ 0.25" << endl;
    value %=25;
    qtde = value/10;
    cout << qtde << " moeda(s) de R$ 0.10" << endl;
    value %=10;
    qtde = value/5;
    cout << qtde << " moeda(s) de R$ 0.05" << endl;
    value %=5;
    qtde = value/1;
    cout << qtde << " moeda(s) de R$ 0.01" << endl;
 
    return 0;
}