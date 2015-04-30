#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

int main()
{
    int numPessoas, k=0, aux;
    float restante, media, mediaF, soma=0;
    float gastos[1000];
    string r;

    while (cin >> numPessoas)
    {
        restante=0;
        media=0;
        mediaF=0;
        aux=0;
        soma=0;
        if (numPessoas == 0)
            break;
        for(int i=0; i<numPessoas; i++)
        {
            cin >> gastos[i];
            soma += gastos[i];
        }
        media=(soma/numPessoas);
        aux=media*1000;
        if (aux%1000 != 0)
        {
            while(aux%10 !=0)
            {
                media=media+0.001;
                aux=media*1000;
            }
        }
        cout << media << endl;
        for(int i=0; i<numPessoas; i++)
        {
            if (gastos[i] > media)
                restante+=(gastos[i]-media);
        }
        k++;
        cout.precision(2);
        cout << "$" << fixed << restante << endl;
    }
    return 0;
}
