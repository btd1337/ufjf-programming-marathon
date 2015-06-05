#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

#define TAM 12

using namespace std;

int main() {
    cout << fixed << setprecision(1);

    vector<double> mat[TAM];
    vector<double>::iterator it1;
    vector<double>::iterator it2;
    int L;
    double op=0,x;
    char T;
    cin >> L;
    cin >> T;
    for(int i=0;i<TAM*TAM;i++) {
            cin >> x;
            mat->push_back(x);
    }
    it1 = mat->begin()+L*TAM;
    it2 = it1+TAM;
    op  = accumulate(it1,it2,0.0);
    cout << (T == 'S' ? op : op / TAM) << endl;
    return 0;
}