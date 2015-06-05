#include <iostream>
#include <iomanip>

#define tam 100

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    double A[tam];
    for(int i=0;i<tam;i++)
        cin >> A[i];
    for(int i=0;i<tam;i++){
        if(A[i]<=10)
            cout << "A[" << i << "] = " << A[i] << endl;
    }
    return 0;
}