#include <iostream>
 
using namespace std;
 
int main() {
 
    int X=1;
    while(X!=0)
    {
        cin >> X;
        for(int i=1; i<=X ; i++)
        {
            if(i==X)
                cout << i << endl;
            else
                cout << i << " ";
        }
    }
 
    return 0;
}