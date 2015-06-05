#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    int ds,vm,t;
    double combMedio;

    cin >> t >> vm;
    ds = vm*t;
    combMedio = ds/12.0;

    cout << setiosflags(ios::fixed) << setprecision(3) << combMedio << endl;
 
    return 0;
}