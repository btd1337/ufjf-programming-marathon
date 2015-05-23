#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    int N;
    double val[3],media;
    cin >> N;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<3;j++)
            cin >> val[j];
        media=(val[0]*2+val[1]*3+val[2]*5)/10;
        cout << media << endl;
    }

    return 0;
}
