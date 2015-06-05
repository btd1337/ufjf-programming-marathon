#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double A,B,C,delta,raiz;

    cin >> A >> B >> C;
    delta = (B*B - (4*A*C));
    if(delta >= 0 && A!=0)
    {
        raiz = ((-B+sqrt(delta))/(2*A));
        cout << "R1 = " << setiosflags(ios::fixed) << setprecision(5) << raiz << endl;
        raiz = ((-B-sqrt(delta))/(2*A));
        cout << "R2 = " << setiosflags(ios::fixed) << setprecision(5) << raiz << endl;
    }
    else
        cout << "Impossivel calcular" << endl;
 
    return 0;
}