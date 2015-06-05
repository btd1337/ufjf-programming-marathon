#include <iostream>
 
using namespace std;
 
int main() {
 
    double valores[6];
    int cont=0;
    for(int i=0;i<6;i++)
    {
        cin >> valores[i];
        if(valores[i]>0)
            cont++;
    }
    cout << cont << " valores positivos" << endl;
 
    return 0;
}