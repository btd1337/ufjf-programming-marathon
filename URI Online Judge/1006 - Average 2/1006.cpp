#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A,B,C,MEDIA;
    cin >> A;
    cin >> B;
    cin >> C;

    MEDIA=((2*A)+(3*B)+(5*C))/10;

    cout << "MEDIA = " << setiosflags(ios::fixed) << setprecision(1) << MEDIA << endl;
    return 0;
}
