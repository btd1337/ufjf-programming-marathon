#include <iostream>
 
using namespace std;
 
int main() {
 
    int X=-1,cont;
    long soma;
    while(X!=0)
    {
        cin >> X;
        if(X==0)
            break;
        cont=0;
        soma=0;
        for(long i=X; cont<5; i++)
            if(i%2==0)
            {
                soma+=i;
                cont++;
            }
        cout << soma << endl;
    }
 
    return 0;
}