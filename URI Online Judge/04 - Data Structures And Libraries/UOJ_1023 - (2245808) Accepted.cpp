#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>



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


int main()
{
    cout << fixed << setprecision(2);
    int cid=1,auxQtde,i,j,N=1;
    vector<tinfConsumo> x(1000000);
    int itFim;
    bool flag = false;

    while(N!=0)
    {
        long qtdeMC=0,cTotalC=0;
        cin >> N;
        if(N==0)
            break;
        for(int i=0; i < N; i++)
        {
            cin >> x[i].qtdeMoradores >> x[i].consumoTotal;
            x[i].consumoMedio = (x[i].consumoTotal)/(x[i].qtdeMoradores);
            qtdeMC+=x[i].qtdeMoradores;
            cTotalC+=x[i].consumoTotal;
            itFim = i;
        }

        sort(x.begin(),x.begin()+N,compare);

        if(flag)
            cout << endl;
        cout << "Cidade# " << cid << ":" << endl;
        for(int i=0; i<N;)
        {
            j=1;
            auxQtde=0;
            if((&x[i]!=&x[itFim]) && (x[i].consumoMedio == x[i+j].consumoMedio))
            {
                    while(i+j<=itFim && (x[i].consumoMedio == x[i+j].consumoMedio))
                    {
                        auxQtde += x[i+j].qtdeMoradores;
                        j++;
                    }
                    cout << x[i].qtdeMoradores+auxQtde << "-" << x[i].consumoMedio;
                    i+=j;
            }
            else
            {
                cout << x[i].qtdeMoradores << "-" << x[i].consumoMedio;
                i++;
            }
            if(i<=itFim)
                cout << " ";
        }

        //Trunc
        double b = (double)cTotalC/qtdeMC;
        long c = b*100;
        double trunc = (double)c/100;

        cout << endl << "Consumo medio: " << trunc << " m3." << endl;
        //Fim

        cid++;
        flag = true;
    }

    return 0;
}
