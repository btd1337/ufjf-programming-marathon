#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double A,B,C;

    cin >> A >> B >> C;

    if(abs(B-C)<A && A<B+C && abs(A-C)<B && B<A+C && abs(A-B)<C && C<A+B)
        cout << "Perimetro = " << A+B+C << endl;
    else
        cout << "Area = " << ((A+B)*C)/2 << endl;
    return 0;
}
