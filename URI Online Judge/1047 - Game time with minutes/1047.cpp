#include <iostream>

using namespace std;

int main()
{
    int startHour,startMinute,endHour,endMinute,hour,minutes;

    cin >> startHour >> startMinute >> endHour >> endMinute;

    if(endMinute>=startMinute)
        minutes=endMinute-startMinute;
    else
        minutes=60-startMinute+endMinute;

    if(endHour>startHour && endMinute>=startMinute)
        hour=endHour-startHour;
    else if(endHour>startHour && endMinute<startMinute)
        hour=0;
    else if(endHour<startHour && endMinute>=startMinute)
        hour=24-startHour+endHour;
    else if(endHour<startHour && endMinute<startMinute)
        hour=23-startHour+endHour;
    else if(endHour==startHour && endMinute>startMinute)
        hour=0;
    else if(endHour==startHour && endMinute<startMinute)
        hour=23;
    else if(endHour==startHour && endMinute==startMinute)
        hour=24;
    cout << "O JOGO DUROU " << hour << " HORA(S) E " << minutes << " MINUTO(S)" << endl;

    return 0;
}
