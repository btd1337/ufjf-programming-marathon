#include <iostream>
#include <vector>

#define maxEleitores 1000
#define maxCandidatos 20

using namespace std;

int main()
{
    int votacoes,i=0,j=0,a,b,x;

    cin >> votacoes;
    cout << endl;
    string trash;
    //Inicializando o vetor de resultados
    vector <int> resultado((maxCandidatos*maxCandidatos),0);
    for(i=0;i<votacoes;i++)
    {
        int numCandidatos,numEleitores=0,op;
        string candidatos[maxCandidatos];
        cin >> numCandidatos;


        //Nome dos Candidatos
        for(j=0;j<numCandidatos;j++)
            getline(cin,candidatos[j]);
        cin >> trash;
        //Iniciando votação

        vector <int> votos((maxEleitores*maxCandidatos),0);

        a=0;
        while(cin >> votos[a])
        {
            numEleitores++;
            a++;
        }
        numEleitores/=numCandidatos;

        for(int h=0;h<numCandidatos;h++)
        {
            for(int g=0;g<numEleitores;g++)
                cout << votos[h*numEleitores+g] << " ";
            cout << endl;
        }
        cout << endl;
        cout << endl;
        //Limpa o vetor de resultado para a próxima votação
        resultado.clear();
    }
    return 0;
}
