#include <iostream>

using namespace std;

int main()
{
    string t1, t2, t3;

    cin >> t1 >> t2 >> t3;

    if(t1=="vertebrado")
    {
        if(t2=="ave")
        {
            if(t3=="carnivoro")
            {
                cout << "aguia" << endl;
            }
            else if(t3=="onivoro")
            {
                cout << "pomba" << endl;
            }
        }
        else if(t2=="mamifero")
        {
            if(t3=="onivoro")
            {
                cout << "homem" << endl;
            }
            else if(t3=="herbivoro")
            {
                cout << "vaca" << endl;
            }
        }

    }
    else if(t1=="invertebrado")
    {
        if(t2=="inseto")
        {
            if(t3=="hematofago")
            {
                cout << "pulga" << endl;
            }
            else if(t3=="herbivoro")
            {
                cout << "lagarta" << endl;
            }
        }
        else if(t2=="anelideo")
        {
            if(t3=="hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else if(t3=="onivoro")
            {
                cout << "minhoca" << endl;
            }
        }

    }
    return 0;
}
