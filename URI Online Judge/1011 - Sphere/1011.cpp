#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3);
    double ray,vol,pi = 3.14159;
    cin >> ray;
    vol = (4.0/3 * pi * (ray*ray*ray));
    cout << "VOLUME = " << vol << endl;
    return 0;
}
