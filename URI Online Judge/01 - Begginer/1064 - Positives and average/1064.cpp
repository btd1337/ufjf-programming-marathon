#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double values[6],sum=0;
    int cont=0;

    for(int i=0;i<6; i++)
    {
        cin >> values[i];
        if(values[i]>0)
        {
            sum+=values[i];
            cont++;
        }
    }
    cout << cont << " valores positivos" << endl;
    cout << sum/cont << endl;

    return 0;
}
