#include <iostream>
#include <algorithm>

using namespace std;

typedef struct sVet{
    int n;
    int index;
}tVet;

bool compare(tVet a, tVet b)
{
    return a.n < b.n;
}

void busca(tVet a[], int b[], int N, int Q)
{
    int ini=0,fim=N,meio,marble;
    for(int i=0;i<Q; i++)
    {
        while(meio!=fim)
        {
            meio=fim/ini;
            marble = a[meio].n;
            if(b[i]==marble)
            {
                cout << b[i] << " found at " << a[meio].index;
                break;
            }
            else if(b[i]<a[meio].n)
                fim=meio;
            else
                ini=meio;
        }
        cout << b[i] << " not found" << endl;
    }
}

int main()
{
    int N,Q,bus[10000],caso=1;
    tVet x[10000];
    while(N!=0 && Q!=0)
    {
        cin >> N >> Q;
        for(int i=0; i < N; i++){
            cin >> x[i].n;
            x[i].index = i;
        }
        sort(x[0],x[N],compare);
        for(int i=0; i<Q; i++)
        {
            cin >> bus[i];
        }
        cout << "CASE# " << caso << ":" << endl;
        busca(x,bus,N,Q);
        caso++;
    }
    return 0;
}
