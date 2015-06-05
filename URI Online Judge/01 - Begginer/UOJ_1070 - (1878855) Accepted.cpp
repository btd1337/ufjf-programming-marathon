#include <iostream>
 
using namespace std;
 
int main() {
 
    int number,cont=0;

    cin >> number;
    for(int i=0;cont<6;i++,number++)
    {
        if(number%2==1)
        {
            cout << number << endl;
            cont++;
        }
    }
 
    return 0;
}