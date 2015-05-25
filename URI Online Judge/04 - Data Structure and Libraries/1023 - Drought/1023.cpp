#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>


using namespace std;

typedef struct sinfConsumo
{
    int qtdeMoradores;
    int consumoTotal;
    int consumoMedio;
}tinfConsumo;

bool compare(tinfConsumo a, tinfConsumo b)
{
    return (a.consumoMedio)<(b.consumoMedio);
}

/*
int agrupe(vector<tinfConsumo> x, int tam, int *qtdeMoradores, int *consumoTotal)
{
    //tinfConsumo *it1,*it2;
    int cont = 0;
    for(vector<tinfConsumo>::iterator it1=x.begin(); it1<x.begin()+tam-1; it1++)
    {
        for(vector<tinfConsumo>::iterator it2=x.begin()+1; it2< x.begin()+tam-cont;it2++)
            if((*it2).consumoMedio==(*it1).consumoMedio)
            {
                (*it1).qtdeMoradores+=(*it2).qtdeMoradores;
                (*it1).consumoTotal+=(*it2).consumoTotal;
                x.erase(it2);
                *qtdeMoradores=(*it1).qtdeMoradores;
                *consumoTotal=(*it1).consumoTotal;
                cont++;
            }
    }
    return cont;
}
*/

int main()
{
    int cidade=1,auxQtde;
    long N=1;
    vector<tinfConsumo> x(1000);
    while(N!=0)
    {
        int qtdeMoradores=0,consumoTotal=0;
        cin >> N;
        for(int i=0; i < N; i++)
        {
            cin >> x[i].qtdeMoradores >> x[i].consumoTotal;
            x[i].consumoMedio = (x[i].consumoTotal)/(x[i].qtdeMoradores);
        }

        sort(x.begin(),x.begin()+N,compare);

        if(N!=0)
        {
            cout << "Cidade# " << cidade << ":" << endl;
            for(int i=0; i<N; i++)
            {
                if(x[i].consumoMedio==x[i+1].consumoMedio)
                {
                    auxQtde=0,j=i+1;
                    while(x[i].consumoMedio==x[j].consumoMedio)
                    {
                        auxQtde+=x[j].consumoMedio;
                        j++;
                    }
                    cout << x[i].qtdeMoradores + auxQtde << "-" << x[i].consumoMedio;
                    i+=(j-i);
                }
                else
                    cout << x[i].qtdeMoradores << "-" << x[i].consumoMedio;
                if(i!=(N-1))
                    cout << " ";
            }
            cout << endl << "Consumo medio: " << (double)consumoTotal/qtdeMoradores << " m3" << endl;
            cidade++;
        }
    }

    return 0;
}
