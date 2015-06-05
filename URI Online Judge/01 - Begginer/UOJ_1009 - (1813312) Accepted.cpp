#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string vendedor;
    double salario,totalVendas;

    getline(cin,vendedor);
    cin >> salario;
    cin >> totalVendas;

    salario += totalVendas*0.15;

    cout << "TOTAL = R$ " << setiosflags(ios::fixed) << setprecision(2) << salario << endl;
 
    return 0;
}