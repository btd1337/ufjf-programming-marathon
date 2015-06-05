#include <iostream>
 
using namespace std;
 
int main() {
 
    int X,Y;
    do
    {
        cin >> X >> Y;
        if(X!=Y)
            cout << (X > Y ? "Decrescente" : "Crescente") << endl;
    }
    while(X!=Y);
 
    return 0;
}