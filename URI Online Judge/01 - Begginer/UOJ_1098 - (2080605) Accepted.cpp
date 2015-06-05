#include <iostream>
 
using namespace std;
 
int main() {
 
    int i,j,k;
    for(i=0; i<=2; i++)
        for(k=0;k<=8;k+=2)
        {
            for(j=i+1;j<=i+3;j++)
            {
                if(k==0)
                    cout << "I=" << i << " J=" << j << endl;
                else
                    cout << "I=" << i << "." << k << " J=" << j << "." << k << endl;
            }
            if(i==2 && k==0)
                break;
        }
 
    return 0;
}