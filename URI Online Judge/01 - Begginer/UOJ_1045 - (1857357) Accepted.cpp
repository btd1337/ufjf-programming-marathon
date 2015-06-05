#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double A,B,C,aux;

    cin >> A >> B >> C;

    if(B>A)
    {
        aux = A;
        A = B;
        B = aux;
    }
    if(C>A)
    {
        aux = A;
        A = C;
        C = aux;
    }
    if(C>B)
    {
        aux = B;
        B = C;
        C = aux;
    }
    aux=pow(B,2)+pow(C,2);
    if(A>=(B+C))
        cout << "NAO FORMA TRIANGULO" << endl;
    else if(pow(A,2)==aux)
        cout << "TRIANGULO RETANGULO" << endl;
    else if(pow(A,2)>aux)
        cout << "TRIANGULO OBTUSANGULO" << endl;
    else if(pow(A,2)<aux)
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(A==B && A==C)
        cout << "TRIANGULO EQUILATERO" << endl;
    else if(A==B || A==C || B==C)
        cout << "TRIANGULO ISOSCELES" << endl;
 
    return 0;
}