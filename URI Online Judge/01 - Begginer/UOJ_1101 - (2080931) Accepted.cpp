#include <iostream>
 
using namespace std;
 
int main() {
 
    int M,N,aux,sum=0;
    while(M != 0 || N != 0)
    {
        cin >> M >> N;

        if(M!=0 && N!=0)
        {
            if(M>N)
            {
                aux = M;
                M = N;
                N = aux;
            }
            for(int i=M ; i<=N ; i++)
            {
                cout << i << " ";
                sum+=i;
            }
            cout << "Sum=" << sum << endl;
            sum=0;
        }
        else
            break;
    }
 
    return 0;
}