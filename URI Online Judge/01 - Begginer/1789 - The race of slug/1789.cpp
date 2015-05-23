#include <iostream>

using namespace std;

int main()
{
    int L,lesmas[500]={0},veloz=0;

    while(cin>>L)
    {
        for(int i=0;i<L;i++)
        {
            cin >> lesmas[i];
            if(lesmas[i]>veloz)
                veloz=lesmas[i];
        }
        if(veloz<10)
            cout << "1" << endl;
        else if(veloz>=10 && veloz<20)
            cout << "2" << endl;
        else if(veloz>=20)
            cout << "3" << endl;
        veloz=0;
    }

    return 0;
}
