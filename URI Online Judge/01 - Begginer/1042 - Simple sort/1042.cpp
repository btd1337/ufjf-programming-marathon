#include <iostream>

using namespace std;

int main()
{
    int vReadOrder[3],vAscendingOrder[3],aux;

    cin >> vReadOrder[0] >> vReadOrder[1] >> vReadOrder[2];
    for(int i=0;i<3;i++)
    {
        vAscendingOrder[i]=vReadOrder[i];
    }

    for(int i=0;i<2;i++)
    {
        for(int j=1;j<3;j++)
        {
                if(vAscendingOrder[j]<vAscendingOrder[i])
                {
                    aux=vAscendingOrder[i];
                    vAscendingOrder[i]=vAscendingOrder[j];
                    vAscendingOrder[j]=aux;
                }
        }
    }

    for(int i=0;i<3;i++)
    {
        cout << vAscendingOrder[i] << endl;
    }
        cout << endl;
    for(int i=0;i<3;i++)
    {
        cout << vReadOrder[i] << endl;
    }

    return 0;
}
