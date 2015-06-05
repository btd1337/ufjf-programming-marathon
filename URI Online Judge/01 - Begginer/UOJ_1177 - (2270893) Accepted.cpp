#include <iostream>
 
using namespace std;
 
int main() {
 
    int T,aux=0,N[1000];
    cin >> T;
    for(int i=0; i<1000; i++){
        if(aux==T)
            aux = 0;
        N[i]=aux;
        aux++;
        cout << "N[" << i << "] = " << N[i] << endl;
    }
 
    return 0;
}