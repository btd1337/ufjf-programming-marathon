#include <iostream>
 
using namespace std;
 
int main() {
   
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cout << "Ho";
        cout << (i==N-1? "!":" ");
    }
    cout << endl;
 
    return 0;
}