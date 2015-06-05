#include <iostream>

using namespace std;

long long calculaFat(int x){
    if(x==0)
        return 1;
    long long fat=1;
    for(int i = x; i>0; i--){
        fat*=i;
    }
    return fat;
}

int main()
{
    int a,b;
    while(cin >> a >> b){

        cout << calculaFat(a)+calculaFat(b) << endl;
    }
    return 0;
}
