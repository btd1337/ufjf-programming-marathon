#include <iostream>
 
using namespace std;
 
int main() {
 
    int N,aux,a=0,b=1;
    cin >> N;
    cout << a << " " << b;
    for(int i=1;i<=N-2;i++)
    {
        cout << " " << a+b;
        aux = a;
        a = b;
        b = aux+b;
    }
    cout << endl;
 
    return 0;
}