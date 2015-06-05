#include <iostream>
 
using namespace std;
 
int main() {
 
    int N, fat=1;
    cin >> N;
    for(int i=N;i>=1;i--)
        fat *=i;
    cout << fat << endl;
 
    return 0;
}