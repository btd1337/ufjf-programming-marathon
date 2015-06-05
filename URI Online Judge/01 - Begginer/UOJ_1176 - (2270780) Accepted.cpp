#include <iostream>
#include <vector>

using namespace std;

unsigned long long calculaFat(int x){
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else {
        unsigned long long fat,a=0,b=1;
        for (int i = 2; i <= x; i++) {
            fat = a+b;
            a = b;
            b = fat;
        }
        return fat;
    }
}

int main() {
    vector<int> vet;
    int T,aux;
    cin >> T;
    for(int i=0;i<T;i++) {
        cin >> aux;
        vet.push_back(aux);
    }
    for(int i=0;i<T;i++){
            cout << "Fib(" << vet[i] << ") = " << calculaFat(vet[i]) << endl;
    }
    return 0;
}