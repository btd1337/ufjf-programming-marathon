#include <iostream>

using namespace std;

int main()
{
    int X,Z,soma=0,i;
    cin >> X >> Z;
    while(Z<=X)
        cin >> Z;
    for(i=0;soma<=Z;i++)
    {
        soma+=X;
        X++;
    }
    cout << i << endl;
    return 0;
}
