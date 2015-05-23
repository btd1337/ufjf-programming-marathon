#include <iostream>

using namespace std;

int main()
{
    int pw;
    do
    {
        cin >> pw;
        if(pw==2002)
            cout << "Acesso Permitido" << endl;
        else
            cout << "Senha Invalida" << endl;
    }
    while(pw!=2002);
    return 0;
}
