#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int codA,qtdA,codB,qtdB;
    double priceA,priceB,total;
    cin >> codA >> qtdA >> priceA;
    cin >> codB >> qtdB >> priceB;
    total=(qtdA*priceA)+(qtdB*priceB);
    cout << "VALOR A PAGAR: R$ " << setiosflags(ios::fixed) << setprecision(2) << total << endl;

    return 0;
}
