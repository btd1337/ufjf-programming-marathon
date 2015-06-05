#include <iostream>

using namespace std;

int main()
{
    int T,i;
    long PA,PB;
    double G1,G2;
    bool flag=true;
    cin >> T;
    if(T>0)
    {
        while(T>0)
        {
            flag = true;
            cin >> PA >> PB >> G1 >> G2;
            for(i=0; PA<=PB; i++)
            {
                if(i>100)
                {
                    cout << "Mais de 1 seculo." << endl;
                    flag=false;
                    break;
                }
                PA*=(1+(G1/100.0));
                if(G2!=0)
                    PB*=(1+(G2/100.0));
            }
            if(flag && i>=101)
                cout << "Mais de 1 seculo." << endl;
            else if(flag)
                cout << i << " anos." << endl;
            T--;
        }
    }
    return 0;
}
