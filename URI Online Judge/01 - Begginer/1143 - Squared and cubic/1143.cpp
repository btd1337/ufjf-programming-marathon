#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int i=1; i<=N; i++)
        for(int j=1; j<=3; j++)
        {
            cout << pow(i,j);
            if(j!=3)
                cout << " ";
            else
                cout << endl;
        }
    return 0;
}
