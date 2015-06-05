#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double A, B, C,triangulo, circulo, trapezio,quadrado,retangulo;

    cin >> A >> B >> C;

    triangulo = (A * C)/ 2;
    circulo =  3.14159*(C*C);
    trapezio = (A+B)*C/2;
    quadrado = B*B;
    retangulo = A*B;

    cout << "TRIANGULO: " << setiosflags(ios::fixed) << setprecision(3) << triangulo << endl;
    cout << "CIRCULO: " << setiosflags(ios::fixed) << setprecision(3) << circulo << endl;
    cout << "TRAPEZIO: " << setiosflags(ios::fixed) << setprecision(3) << trapezio << endl;
    cout << "QUADRADO: " << setiosflags(ios::fixed) << setprecision(3) << quadrado << endl;
    cout << "RETANGULO: " << setiosflags(ios::fixed) << setprecision(3) << retangulo << endl;
 
    return 0;
}