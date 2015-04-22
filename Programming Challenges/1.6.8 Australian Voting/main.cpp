/** Pontos importantes:

-> Inicialmente considera-se somente a PRIMEIRA OPÇÃO de cada eleitor.
-> A recontagem dos votos  continua até que um candidato receba mais que 50% dos votos, ou até que todos os candidatos que restam estejam empatados.

*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    int numCasos, numCandidatos, caso=0;

    cin >> numCasos;

    if (numCasos > 0){
        cout << endl;
        while (caso <= numCasos){
            cin >> numCandidatos;
            if (numCandidatos > 0){
                string candidatos[numCandidatos];
                int numEleitores = 5, TotalVotos=0;
                int contVotos[numCandidatos][numCandidatos];
                int votos[numCandidatos][numEleitores];

                for (int i=0; i<numEleitores ; i++){
                    for (int j=0 ; j<numCandidatos; j++){
                        contVotos[j][i] = 0;
                    }
                }

                string trash;
                cin >> trash;

                for(int i=0; i<numCandidatos; i++){
                    getline(cin,candidatos[i]);
                }

                for (int i=0; i<numEleitores ; i++){
                    for (int j=0 ; j<numCandidatos; j++){
                        cin >> votos[i][j];
                        TotalVotos++;
                        contVotos[votos[i][j]][j]++;
                    }
                }

                cout << "Total de votos: " << TotalVotos << endl;

                int empate,coluna=0;
                bool fim=true;

                while(fim){
                    empate=0;
                    float porcent[numCandidatos];

                    for (int i=0; i<numCandidatos; i++){
                        cout << "ContVotos: " << contVotos[i][coluna]<< endl;
                        if (contVotos[i][coluna] == i){
                            porcent[i] = (float)(contVotos[i][coluna])/(float)TotalVotos;
                            cout << "Calculo Porc: " << porcent[i] << endl;
                            cin >> trash;
                        }
                        if (porcent[i] > 0.5){
                            if(candidatos[i] != "x"){
                                cout << "Vencedor: " << candidatos[i] << endl;
                                fim=false;
                                break;
                            }
                        }
                    }

                    float menorPorc=1.0;
                    for (int i=0; i<numCandidatos; i++){
                        if(porcent[i] < menorPorc){
                            if(candidatos[i] != "x"){
                                menorPorc=porcent[i];
                                cout << "MenorPorc: " << porcent[i] << endl;
                            }
                        }
                    }

                    for (int i=0; i<numCandidatos; i++){
                        if(porcent[i] == menorPorc){
                            if(candidatos[i] != "x"){
                               empate++;
                            }
                        }
                    }

                    if (empate == numCandidatos){
                        for (int i=0; i<numCandidatos; i++){
                            if(candidatos[i] != "x"){
                                cout << "Empatados: " << candidatos[i] << endl;
                            }
                        }
                    }
                    else{
                        for (int i=0; i<numCandidatos; i++){
                            if(porcent[i]==menorPorc){
                                if(candidatos[i] != "x"){
                                    candidatos[i] = "x";
                                }
                            }
                        }
                    }

                coluna++;

                }


            }
        }
    }
    return 0;
}
