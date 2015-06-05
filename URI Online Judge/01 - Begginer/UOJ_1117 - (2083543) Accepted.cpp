#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int cont=0;
    double a=-1,media=0;
    while(cont<2)
    {
        cin >> a;
        if(a>=0 && a<=10)
        {
            media+=a;
            cont++;
        }
        else
            cout << "nota invalida" << endl;
    }
    cout << "media = " << media/2 << endl;
 
    return 0;
}