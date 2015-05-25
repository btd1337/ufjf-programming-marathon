#include <iostream>

using namespace std;

void calculaMDC(int n1,int d1)
{
    int maior=n1,menor=d1,mdc=1;
    bool negativo=false;

    if(n1<0){
        n1*=-1;
        negativo = true;
    }
    if(d1<0){
        d1*=-1;
        negativo = true;
    }
    if(d1>n1){
        maior = d1;
        menor = n1;
    }

    for(int i=1; i<=menor ; i++)
    {
        if(n1%i==0 && d1%i==0)
            mdc=i;
    }
    if(negativo)
        n1 *=-1;

    cout << n1 << "/" << d1 << " = " << n1/mdc << "/" << d1/mdc << endl;
}

int main()
{
    int N, n1,n2,d1,d2;
    char op,trash;

    cin >> N;
    for(int i=0; i < N ; i++)
    {
        cin >> n1 >> trash >> d1 >> op >> n2 >> trash >> d2;
        switch(op)
        {
            case '+':
            {
                n1=(n1*d2 + n2*d1);
                d1=(d1*d2);
                calculaMDC(n1,d1);
                break;
            }
            case '-':
            {
                n1=(n1*d2 - n2*d1);
                d1=(d1*d2);
                calculaMDC(n1,d1);
                break;
            }
            case '*':
            {
                n1=(n1*n2);
                d1=(d1*d2);
                calculaMDC(n1,d1);
                break;
            }
            case '/':
            {
                n1=(n1*d2);
                d1=(d1*n2);
                calculaMDC(n1,d1);
                break;
            }
        }
    }
    return 0;
}
