#include <iostream>
using namespace std;

int main()
{
    int a,b,i,j,maximo=1,ciclo=0;

    cin >> a >> b ;

    for(i=a;i<=b;i++)
    {
        for(j=i;j!=1;ciclo++)
        {
            if(j%2==0)
                j/=2;
            else if(j%2==1)
                j=(j*3)+1;
        }
        if(ciclo>maximo)
            maximo=ciclo;
        ciclo=0;
    }
    cout << a << " " << b << " " << maximo+1 << endl;
    return 0;
}
