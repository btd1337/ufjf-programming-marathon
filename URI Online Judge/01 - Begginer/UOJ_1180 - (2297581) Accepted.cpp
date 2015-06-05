#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N,x,min,minPos=0;
    cin >> N;
    vector<int> vet[N];
    vector<int>::iterator it;
    for(int i=0;i < N; i++){
        cin >> x;
        vet->push_back(x);
    }
    min=*vet->begin();
    for(it=vet->begin();it<vet->end();it++){
        if(*it<min){
            min=*it;
            minPos=distance(vet->begin(),it);
        }
    }
    cout << "Menor valor: " << min << endl;
    cout << "Posicao: " << minPos << endl;
    return 0;
}