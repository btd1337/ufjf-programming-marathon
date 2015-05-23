#include <iostream>

using namespace std;

int main()
{
    int N,cont=0;
    cin >> N;
    for(int i=1; cont < N ; i++)
    {
        if(i%4==0)
        {
            cout << "PUM" << endl;
            cont++;
        }
        else
            cout << i << " ";
    }
    return 0;
}
