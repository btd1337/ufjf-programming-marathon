#include <iostream>

using namespace std;

int main()
{
    int N,num;

    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> num;
        if(num==0)
            cout << "NULL" << endl;
        else if(num%2==0 && num>0)
            cout << "EVEN POSITIVE" << endl;
        else if(num%2==0 && num<0)
            cout << "EVEN NEGATIVE" << endl;
        else if(num%2==1)
            cout << "ODD POSITIVE" << endl;
        else if(num%2==-1)
            cout << "ODD NEGATIVE" << endl;
    }
    return 0;
}
