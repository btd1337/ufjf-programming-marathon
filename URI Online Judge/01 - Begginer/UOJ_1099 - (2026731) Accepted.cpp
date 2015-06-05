#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,X,Y,soma;

    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> X >> Y;
        if(X>Y)
        {
            int aux;
            aux=X;
            X=Y;
            Y=aux;
        }
        if(X%2==1)
            X++;
        for(int j=X;j<Y;j++)
        {
            if(j%2==1)
                soma+=j;
        }
        cout << soma << endl;
        soma=0;
    }
 
    return 0;
}