#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int number,workhours;
    double salarioHora,salario;
    cin >> number;
    cin >> workhours;
    cin >> salarioHora;

    salario=workhours*salarioHora;
    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << setiosflags(ios::fixed) << setprecision(2) << salario << endl;
 
    return 0;
}