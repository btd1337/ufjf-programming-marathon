#include <iostream>

using namespace std;

int main()
{
    int op,i,g,wI=0,wG=0,draws=0,matches=0;
    do
    {
        op=0;
        cin >> i >> g;
        if(i>g)
            wI++;
        else if(g>i)
            wG++;
        else
            draws++;
        matches++;
        while(op<1 || op>2)
        {
            cout << "Novo grenal (1-sim 2-nao)" << endl;
            cin >> op;
        }
    }
    while(op!=2);
    cout << matches << " grenais" << endl;
    cout << "Inter:" << wI << endl;
    cout << "Gremio:" << wG << endl;
    cout << "Empates:" << draws << endl;
    if(wI>wG)
        cout << "Inter venceu mais" << endl;
    else if(wG>wI)
        cout << "Gremio venceu mais" << endl;
    else
        cout << "Nao houve vencedor" << endl;
    return 0;
}
