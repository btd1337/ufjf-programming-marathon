#include <iostream>
 
using namespace std;
 
int main() {
 
    int values[5],even=0,odd=0,negatives=0,positives=0;

    for(int i=0;i<5;i++)
    {
        cin >> values[i];
        if(values[i]>0)
            positives++;
        else if(values[i]<0)
            negatives++;
        if(values[i]%2==0)
            even++;
        else
            odd++;
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positives << " valor(es) positivo(s)" << endl;
    cout << negatives << " valor(es) negativo(s)" << endl;
 
    return 0;
}