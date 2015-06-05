#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,Y;
    cin >> X >> Y;
    for(int i=1; i<=Y ;)
        for(int j=1; j<=X;j++,++i)
        {
            if(j==X)
                cout << i << endl;
            else
                cout << i << " ";
        }
 
    return 0;
}