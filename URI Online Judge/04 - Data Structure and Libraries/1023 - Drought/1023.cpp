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
    vector<tinfConsumo> x(1000);
    while(N!=0)
    {
        int qtdeMC=0,cTotalC=0;
        cin >> N;
        for(int i=0; i < N; i++)
        {
            cin >> x[i].qtdeMoradores >> x[i].consumoTotal;
            x[i].consumoMedio = (x[i].consumoTotal)/(x[i].qtdeMoradores);
            qtdeMC+=x[i].qtdeMoradores;
            cTotalC+=x[i].consumoTotal;
        }

        sort(x.begin(),x.begin()+N,compare);

        cout << "Cidade# " << cid << ":" << endl;
        for(int i=0; i<N;)
        {
            j=1;
            auxQtde=0;
            if((&x[i+j]!=&x[N]) && (x[i].consumoMedio == x[i+j].consumoMedio))
            {
                while((&x[i+j]!=&x[N]) && (x[i].consumoMedio == x[i+j].consumoMedio))
                {
                    auxQtde += x[j].qtdeMoradores;
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
            if(&x[i]==&x[N])
                cout << endl;
            else
                cout << " ";
        }

        //Trunc
        double b = (double) cTotalC / qtdeMC;
        int c = b*100;
        double trunc = (double)c/100;

        cout << "Consumo medio: " << trunc << " m3.";
        //Fim

        cid++;
        if(cid!=N)
            cout << endl;



    }

    return 0;
}
