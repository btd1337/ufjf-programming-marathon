/*
Entrada

Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.
Saída

Na saída, deve ser apresentada a duração do evento, no seguinte formato:

W dia(s)
X hora(s)
Y minuto(s)
Z segundo(s)

Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

Exemplos de Entrada 	Exemplos de Saída

Dia 5                   3 dia(s)
08 : 12 : 23            22 hora(s)
Dia 9                   1 minuto(s)
06 : 13 : 23            0 segundo(s)
*/

#include <iostream>

using namespace std;

//Following day
bool fullDay(int startHour,int startMinutes,int startSeconds,int endHour,int endMinutes,int endSeconds)
{
    if(startHour==endHour && startMinutes==endMinutes && startSeconds==endSeconds)
        return true;
    else if((endHour>startHour) || (endHour==startHour && endMinutes>startMinutes) || (endHour==startHour && endMinutes==startMinutes && endSeconds>startSeconds))
        return true;
    else
        return false;
}

bool fullHour(int startDay,int startHour,int startMinutes, int startSeconds,int endDay,int endHour, int endMinutes, int endSeconds)
{
        if(startMinutes==endMinutes && startSeconds==endSeconds)
            return true;
        else if((endMinutes>startMinutes) || (endMinutes==startMinutes && endSeconds>startSeconds))
            return true;
        else
            return false;
}

bool fullMinutes(int startMinutes,int startSeconds, int endMinutes, int endSeconds)
{

}

bool fullSeconds(int startSeconds,int endSeconds)
{
    if(startSeconds>=)
}

/*
void sameDay(int startHour,int startMinutes,int startSeconds,int endHour,int endMinutes,int endSeconds)
{
    cout << "0 dia(s)" << endl;
}

int checkDay(int startDay,int endDay)
{
    return endDay-startDay;
}




void checkHour(int startDay,int endDay, int startHour,int endHour, int startMinutes, int startSeconds, int endMinutes, int endSeconds)
{

    if(endDay>startDay)
    {
        if(endHour>startHour)
        {
            if(HourFull(startMinutes,startSeconds,endMinutes,endSeconds))
                cout << endHour-startHour << " hora(s)" << endl;
            else
                cout << endHour-startHour-1 << " hora(s)" << endl;
        }
        else if(HourFull(startMinutes,startSeconds,endMinutes,endSeconds))
            cout << 24-startHour+endHour << " hora(s)" << endl;
        else
            cout << 24-startHour+endHour-1 << " hora(s)" << endl;
    }

    else
    {
        if(endHour>startHour)
        {
            if(HourFull(startMinutes,startSeconds,endMinutes,endSeconds))
                cout << endHour-startHour << " hora(s)" << endl;
            else
                cout << endHour-startHour-1 << " hora(s)" << endl;
        }
        else if(HourFull(startMinutes,startSeconds,endMinutes,endSeconds))
            cout << 24-startHour+endHour << " hora(s)" << endl;
        else
            cout << 24-startHour+endHour-1 << " hora(s)" << endl;
    }
}

void checkMinutes(int startMinutes, int endMinutes)
{
    if(endMinutes>=startMinutes)
        cout << endMinutes-startMinutes << " minuto(s)" << endl;
    else
        cout << 60-startMinutes+endMinutes << " minuto(s)" << endl;
}

void checkSeconds(int startSeconds, int endSeconds)
{
    if(endSeconds>=startSeconds)
        cout << endSeconds-startSeconds << " segundo(s)" << endl;
    else
        cout << 60-startSeconds+endSeconds << " segundo(s)" << endl;
}

void checkTimes(int startDay,int endDay,int startHour,int startMinutes,int startSeconds,int endHour, int endMinutes,int endSeconds)
{
    checkHour(startDay,endDay,startHour,endHour,startMinutes,startSeconds,endMinutes,endSeconds);
    checkMinutes(startMinutes,endMinutes);
    checkSeconds(startSeconds,endSeconds);
}

*/

int main()
{
    int startDay,endDay,startHour,endHour,startMinutes,endMinutes, startSeconds, endSeconds;
    string trash;

    while(trash!="0"){
    cin >> trash >> startDay;
    cin >> startHour >> trash >> startMinutes >> trash >> startSeconds;
    cin >> trash >> endDay;
    cin >> endHour >> trash >> endMinutes >> trash >> endSeconds;

    //Checks same day
    if(endDay==startDay)
        sameDay(startHour,startMinutes,startSeconds,endHour,endMinutes,endSeconds);
    //Checks next day
    else if(endDay-startDay==1)
    {
        if(fullDay(startHour,startMinutes,startSeconds,endHour,endMinutes,endSeconds))
            cout << "1 dia(s)" << endl;
        else
            cout << "0 dia(s)" << endl;
    }
    //Checks last day is full
    else if(fullDay(startHour,startMinutes,startSeconds,endHour,endMinutes,endSeconds))
        cout << endDay-startDay << " dia(s)" << endl;
    else
        cout << endDay-startDay-1 << " dia(s)" << endl;
    checkTimes(startDay,endDay,startHour,startMinutes,startSeconds,endHour,endMinutes,endSeconds);


    cout << endl;
    }
    return 0;
}
