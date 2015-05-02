#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int cont=0,X;
    double a=-1,media=0;
    while(X!=2)
    {
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
        media=0;
        cont=0;
        do
        {
            cout << "novo calculo (1-sim 2-nao)" << endl;
            cin >> X;
        }
        while(X<1 || X>2);
    }
    return 0;
}
