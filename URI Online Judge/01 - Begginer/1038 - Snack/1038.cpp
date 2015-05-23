#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int cod,qtde;
    double price;

    cin >> cod >> qtde;
    switch(cod)
    {
        case 1:
        {
            price = qtde*4.00;
            cout << "Total: R$ " << price << endl;
            break;
        }
        case 2:
        {
            price = qtde*4.50;
            cout << "Total: R$ " << price << endl;
            break;
        }
        case 3:
        {
            price = qtde*5.00;
            cout << "Total: R$ " << price << endl;
            break;
        }
        case 4:
        {
            price = qtde*2.00;
            cout << "Total: R$ " << price << endl;
            break;
        }
        case 5:
        {
            price = qtde*1.50;
            cout << "Total: R$ " << price << endl;
            break;
        }
    }

    return 0;
}
