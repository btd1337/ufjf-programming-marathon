#include <iostream>

using namespace std;

int main()
{
    int N,num,in=0,out=0;

    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> num;
        if(num>=10 && num <=20)
            in++;
        else
            out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
    return 0;
}
