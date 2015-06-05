#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    int N,total=0,rabbit=0,frog=0,rat=0,aux=0;
    char op;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        cin >> aux >> op;
        total+=aux;
        if(op=='S')
            frog+=aux;
        else if(op=='C')
            rabbit+=aux;
        else if(op=='R')
            rat+=aux;
    }
    cout << "Total: " << total << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbit << endl;
    cout << "Total de ratos: " << rat << endl;
    cout << "Total de sapos: " << frog << endl;
    cout << "Percentual de coelhos: "<< rabbit*100.0/total << " %" << endl;
    cout << "Percentual de ratos: " << rat*100.0/total << " %" << endl;
    cout << "Percentual de sapos: " << frog*100.0/total << " %" << endl;
 
    return 0;
}