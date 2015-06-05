#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    int i,aux;
    double X,Y;
    cin >> aux;
    for(i=0; i<aux ; i++)
    {
        cin >> X >> Y;
        if(Y==0)
            cout << "divisao impossivel" << endl;
        else
            cout << X/Y << endl;
    }
 
    return 0;
}