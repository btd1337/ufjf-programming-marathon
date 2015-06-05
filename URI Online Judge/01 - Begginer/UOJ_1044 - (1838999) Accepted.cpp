#include <iostream>
 
using namespace std;
 
int main() {
 
    int A,B,aux;

    cin >> A >> B;
    if(A>B)
    {
        aux = B;
        B = A;
        A = aux;
    }
    if(B%A==0)
        cout << "Sao Multiplos" << endl;
    else
        cout << "Nao sao Multiplos" << endl;
 
    return 0;
}