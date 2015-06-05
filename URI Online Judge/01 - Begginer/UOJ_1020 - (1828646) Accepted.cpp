#include <iostream>
 
using namespace std;
 
int main() {
 
    int idadeDias,meses,anos;

    cin >> idadeDias;
    anos = idadeDias/365;
    meses = (idadeDias%365)/30;
    idadeDias = (idadeDias%365)%30;

    cout << anos << " ano(s)" << endl;
    cout << meses << " mes(es)" << endl;
    cout << idadeDias << " dia(s)" << endl;
 
    return 0;
}