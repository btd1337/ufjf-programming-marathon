#include <iostream>
#include <vector>
#include <string>

#define eleitores 5
#define capacity 1000

using namespace std;

int main()
{
	int votacoes, i = 0, j = 0, x;

	cin >> votacoes;
	cout << endl;
	string trash;
	for (i = 0; i<votacoes; i++)
	{
		int num_candidatos;
		cin >> num_candidatos;
		string *nome_candidatos = new string[num_candidatos];
		int op;

		//Inicializando o vetor de resultados
		vector <int> resultado(num_candidatos*num_candidatos);

		//Nome dos Candidatos
		for (int j = 0; j<num_candidatos; j++)
			getline(cin, nome_candidatos[j]);
		cin >> trash;
		//Iniciando votação

		vector <int> votos(capacity*num_candidatos);

		for (int a = 0; a<eleitores; a++)
		{
			for (int b = 0; b<num_candidatos; b++)
			{
				cin >> x;
				votos.push_back(x);
				op = x - 1;
				resultado[a*num_candidatos + op] = 1;
			}
		}


		for (int a = 0; a<num_candidatos; a++)
		{
			for (int b = 0; b<num_candidatos; b++)
				cout << resultado[a*num_candidatos + b] << " ";
			cout << endl;
		}
	}

	return 0;
}
