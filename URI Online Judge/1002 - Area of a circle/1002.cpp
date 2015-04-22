#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A,PI,raio;
    PI=3.14159;
    cin >> raio;
    A = PI * raio * raio;
    cout << "A=" << setiosflags (ios::fixed) << setprecision (4) << A << endl;
    return 0;fr
}
