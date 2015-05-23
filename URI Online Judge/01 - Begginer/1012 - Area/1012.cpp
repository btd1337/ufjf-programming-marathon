#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(3) << endl;
    double A, B, C,triangulo, circulo, trapezio,quadrado,retangulo;

    cin >> A >> B >> C;

    triangulo = (A * C)/ 2;
    circulo =  3.14159*(C*C);
    trapezio = (A+B)*C/2;
    quadrado = B*B;
    retangulo = A*B;

    cout << "TRIANGULO: " << triangulo << endl;
    cout << "CIRCULO: " << circulo << endl;
    cout << "TRAPEZIO: " << trapezio << endl;
    cout << "QUADRADO: " << quadrado << endl;
    cout << "RETANGULO: " << retangulo << endl;
    return 0;
}
