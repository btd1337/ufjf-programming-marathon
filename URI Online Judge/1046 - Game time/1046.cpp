#include <iostream>

using namespace std;

int main()
{
    int startTime, endTime;

    cin >> startTime >> endTime;

    if(endTime<startTime)
    {
        cout << "O JOGO DUROU " << 24-startTime+endTime << " HORA(S)" << endl;
    }
    else if(endTime==startTime)
    {
        cout << "O JOGO DUROU 24 HORA(S)" << endl;
    }
    else
        cout << "O JOGO DUROU " << endTime - startTime << " HORA(S)" << endl;

    return 0;
}
