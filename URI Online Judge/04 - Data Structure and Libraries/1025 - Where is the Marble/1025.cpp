#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool compare(int a, int b){
    return a < b;
}

int main()
{
    int N=-1,Q=-1,aux,op=1,index;
    vector<int> marbles;
    vector<int>::iterator it;
    bool flag;

    while(N!=0 && Q!=0){
        cin >> N >> Q;
        if(N==0 && Q==0)
            break;
        flag = true;
        for(int i=0;i<N;i++){
            cin >> aux;
            marbles.push_back(aux);
        }
        sort(marbles.begin(),marbles.end(),compare);
        for(int i=0; i<Q; i++){
            cin >> aux;
            if(flag){
                cout << "CASE# " << op << ":" << endl;
                flag=false;
            }
            it=find(marbles.begin(),marbles.end(),aux);
            if(it!=marbles.end()){
                index = distance(marbles.begin(),it);
                cout << aux << " found at " << index+1 << endl;
            }
            else
                cout << aux << " not found" << endl;
        }
    marbles.erase(marbles.begin(),marbles.end());
    op++;
    }
    return 0;
}
