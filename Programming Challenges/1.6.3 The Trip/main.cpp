#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numPessoas, k=0;
    float restante[1000], media=0, soma=0;
    float gastos[1000];

    while (cin >> numPessoas)
    {
        cout << "a" << endl;
        if (numPessoas == 0)
            break;
        for(int i=0; i<numPessoas; i++)
        {
            cin >> gastos[i];
            soma += gastos[i];
        }
        media=soma/numPessoas;
        for(int i=0; i<numPessoas; i++)
        {
            if (gastos[i] > media)
                restante[k]+=(gastos[i]-media);
        }
        k++;
    }
    setprecision >> fixed(2);
    for(int i=0; i<k; i++)
    {
        cout << "$" << restante[i] << endl;
    }
    return 0;
}
