#include <iostream>

using namespace std;

int main()
{
    int N,X,Y,soma,cont;
    cin >> N;
    for(int i=0; i<N; i++){
        soma=0;
        cont=0;
        cin >> X >> Y;
        for(int j=X; cont<Y;j++)
            if(j%2){
                soma+=j;
                cont++;
            }
        cout << soma << endl;
    }
    return 0;
}
