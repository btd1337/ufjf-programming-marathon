#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int dt;
    double time;

    cin >> dt;
    time = dt/0.5;
    cout << setiosflags(ios::fixed) << setprecision(0) << time << " minutos" << endl;
 
    return 0;
}