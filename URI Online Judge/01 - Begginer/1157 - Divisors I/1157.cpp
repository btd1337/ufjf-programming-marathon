#include <iostream>

using namespace std;

int main()
{
    int N;
    bool negativo=false;
    cin >> N;
    if(N<0)
    {
        N*=-1;
        negativo=true;
    }
    for(int i=1;i<=N;i++)
    {
        if(N%i==0 && negativo)
            cout << i*-1 << endl;
        else if(N%i==0)
            cout << i << endl;
    }
    return 0;
}
