#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    cout << fixed << setprecision(1);
    float n1,n2,n3,n4,media;

    cin >> n1 >> n2 >> n3 >> n4;
    media = (n1*2 + n2*3 + n3*4 + n4*1)/10.0;
    cout <<"Media: " << media << endl;
    if(media>=7)
        cout << "Aluno aprovado." << endl;
    else if(media<5)
        cout << "Aluno reprovado." << endl;
    else
    {
        cout << "Aluno em exame." << endl;
        cin >> n1;
        cout << "Nota do exame: "  << n1 << endl;
        media = (media+n1)/2;
        if(media>=5)
        {
            cout << "Aluno aprovado." << endl;
            cout << "Media final: "  << media << endl;
        }
        else
        {
            cout << "Aluno reprovado." << endl;
            cout << "Media final: "  << media << endl;
        }
    }
    return 0;
}
