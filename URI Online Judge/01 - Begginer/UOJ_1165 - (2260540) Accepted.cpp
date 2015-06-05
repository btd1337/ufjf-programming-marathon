#include <iostream>
 
using namespace std;
 
int main() {
    
    int N,X,cont;
    cin >> N;
    while(N>0){
        cin >> X;
        cont=0;
        for(int i=1; i<X; i++)
            if(X%i==0)
                cont++;
        if(cont==1)
            cout << X << " eh primo" << endl;
        else
            cout << X << " nao eh primo" << endl;
        N--;
    }
 
    return 0;
}