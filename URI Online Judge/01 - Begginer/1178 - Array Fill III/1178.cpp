#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(4);
    double N[100];
    cin >> N[0];
    for(int i=1;i<100;i++){
        N[i]=N[i-1]/2.0;
    }
    for(int i=0;i<100; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}
