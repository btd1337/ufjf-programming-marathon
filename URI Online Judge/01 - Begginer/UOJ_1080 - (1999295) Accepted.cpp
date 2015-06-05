#include <iostream>
 
using namespace std;
 
int main() {
 
    int n[100],bigger,pos=0;

    for(int i=0;i<100;i++)
    {
        cin >> n[i];
        if(i==0)
            bigger=n[i];
        if(n[i]>bigger)
        {
            bigger=n[i];
            pos=i;
        }
    }
    cout << bigger << endl;
    cout << pos+1 << endl;
 
    return 0;
}