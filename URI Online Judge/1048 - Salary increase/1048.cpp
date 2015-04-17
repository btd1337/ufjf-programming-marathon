#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double salary,adjustmentPercentages;
    int percent;

    cin >> salary;
    if(salary>=0 && salary<=400)
    {
        adjustmentPercentages=1.15;
        percent=15;
    }
    else if(salary>400 && salary<=800)
    {
        adjustmentPercentages=1.12;
        percent=12;
    }
    else if(salary>800 && salary<=1200)
    {
        adjustmentPercentages=1.10;
        percent = 10;
    }
    else if(salary>1200 && salary<=2000)
    {
        adjustmentPercentages=1.07;
        percent = 7;
    }
    else if(salary>2000)
    {
        adjustmentPercentages=1.04;
        percent = 4;
    }
    cout << "Novo salario: " << salary*adjustmentPercentages << endl;
    cout << "Reajuste ganho: " << salary*adjustmentPercentages-salary << endl;
    cout << "Em percentual: " << percent << " %" << endl;
    return 0;
}
