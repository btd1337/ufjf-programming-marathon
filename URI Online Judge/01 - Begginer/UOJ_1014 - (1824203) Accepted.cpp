#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int X;
    double Y,media;
    cin >> X;
    cin >> Y;
    media = X/Y;

    cout << setiosflags(ios::fixed) << setprecision(3) << media << " km/l" << endl;
 
    return 0;
}