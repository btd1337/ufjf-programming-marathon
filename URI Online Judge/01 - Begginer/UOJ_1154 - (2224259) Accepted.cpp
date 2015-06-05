#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int x=0,cont=0;
    double media=0;
    while(x>=0)
    {
        cin >> x;
        if(x>0)
        {
            media+=x;
            cont++;
        }
    }
    media /= cont;
    cout << media << endl;
    return 0;
}