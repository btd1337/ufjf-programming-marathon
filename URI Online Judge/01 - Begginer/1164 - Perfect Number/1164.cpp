#include <iostream>

using namespace std;

int main()
{
    int N;
    long X,soma;
    cin >> N;
    while(N>0){
        cin >> X;
        soma =0;
        for(int i=1;i<X;i++)
            if(X%i==0)
                soma+=i;
        if(soma==X)
            cout << X << " eh perfeito" << endl;
        else
            cout << X << " nao eh perfeito" << endl;
        N--;
    }
    return 0;
}
