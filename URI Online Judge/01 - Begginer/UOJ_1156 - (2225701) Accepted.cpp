#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double S=1;
    for(int i=3,j=2; i<=39; i+=2,j*=2)
        S+=(double)i/j;
    cout << S << endl;
 
    return 0;
}