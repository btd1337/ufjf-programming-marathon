#include <iostream>

using namespace std;

int main()
{
    int X,Y,aux,soma=0;

    cin >> X >> Y;
    if(X>Y)
    {
        aux = X;
        X = Y;
        Y = aux;
    }

    for(int i=X+1;i<Y;i++)
    {
        if((i%2)!=0)
        {
            soma+=i;
        }
    }
    cout << soma << endl;
    return 0;
}
