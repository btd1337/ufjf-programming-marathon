#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << fixed << setprecision(0);
    int N;
    cin >> N;
    for(int i=1; i<=N ; i++)
        for(int j=0; j<2; j++)
        {
            if(j)
                cout << pow(i,1) << " " << pow(i,2)+1 << " " << pow(i,3)+1 << endl;
            else
                cout << pow(i,1) << " " << pow(i,2) << " " << pow(i,3) << endl;

        }
    return 0;
}
