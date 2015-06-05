#include <iostream>
 
using namespace std;
 
int main() {
 
    int A=0,G=0,D=0,op;
    cout << "MUITO OBRIGADO" << endl;
    do
    {
        cin >> op;
        switch(op)
        {
            case 1: A++; break;
            case 2: G++; break;
            case 3: D++; break;
        }
    }
    while(op!=4);
    cout << "Alcool: " << A << endl;
    cout << "Gasolina: " << G << endl;
    cout << "Diesel: " << D << endl;
 
    return 0;
}