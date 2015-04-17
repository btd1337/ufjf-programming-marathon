#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(2);
    double salary,taxBand[4];
    int type=0;
    taxBand[3]=0;

    cin >> salary;
    if(salary<=2000.00)
        type=-1;
    else if(salary>2000.00 && salary<=3000.00)
    {
        taxBand[0]=salary-2000;
        taxBand[0]*=0.08;
        type=1;
    }
    else if(salary>3000.00 && salary<=4500.00)
    {
        taxBand[0]=1000.00*0.08;
        taxBand[1]=salary-3000.00;
        taxBand[1]*=0.18;
        type=2;
    }
    else if(salary>4500)
    {
        taxBand[0]=1000.00*0.08;
        taxBand[1]=1500.00*0.18;
        taxBand[2]=salary-4500.00;
        taxBand[2]*=0.28;
        type=3;
    }
    for(int i=0;i<type;i++)
    {
        taxBand[3]+=taxBand[i];
    }

    if(salary<=2000)
        cout << "Isento" << endl;
    else if(salary>2000)
        cout << "R$ " << taxBand[3] << endl;

    return 0;
}
