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
    int numCasos, numCandidatos,op;

    cin >> numCasos;

    if (numCasos > 0)
    {
        cout << endl;
        for(int x=0;x<numCasos;x++)
        {
            cin >> numCandidatos;
            if (numCandidatos > 0)
            {
                string candidatos[numCandidatos];
                int numEleitores = 5, TotalVotos = numEleitores*numCandidatos;
                int contVotos[numCandidatos][numCandidatos];
                int votos[numCandidatos][numEleitores];

<<<<<<< HEAD
                for (int i=0; i<numEleitores ; i++){
                    for (int j=0 ; j<numCandidatos; j++){
                        contVotos[j][j] = 0;
                        votos[i][j] = 0;
                    }
                }
=======
                for(int i=0;i<numCandidatos;i++)
                    for(int j=0;j<numCandidatos;j++)
                        contVotos[i][j]=0;
                for(int i=0;i<numCandidatos;i++)
                    for(int j=0;j<numEleitores;j++)
                        votos[i][j]=0;
>>>>>>> 767b65d8a704633dfbb7ed496e47277316b87481

                string trash;
                cin >> trash;

                for(int i=0; i<numCandidatos; i++){
                    getline(cin,candidatos[i]);
                }
                TotalVotos=numEleitores*numCandidatos;
                for(int i=0; i<numEleitores;i++)
                {
                    for (int j=0; j<numCandidatos;j++)
                    {
                        cin >> votos[i][j];
<<<<<<< HEAD
=======
                        op=votos[i][j];
                        contVotos[j][op-1]+=1;
>>>>>>> 767b65d8a704633dfbb7ed496e47277316b87481
                    }
                    for(int marin=0;marin<numCandidatos;marin++)
                        {
                            for(int nery=0;nery<numCandidatos;nery++)
                                cout << contVotos[marin][nery];
                            cout << endl;
                        }
                }

                for (int i=0; i<numEleitores ; i++){
                    for (int j=0 ; j<numCandidatos; j++){
                        if (votos[i][j] = j+1){
                            contVotos[i][j]++;
                        }
                    }
                }

                cout << endl << endl;

                for (int i=0; i<numCandidatos ; i++){
                    for (int j=0 ; j<numCandidatos; j++){
                        cout << contVotos[i][j] << " ";
                    }
                    cout << endl;
                }

                cout << endl << endl;

                cout << "Total de votos: " << TotalVotos << endl;

                int empate,coluna=0;
                bool fim=true;

                while(fim){
                    empate=0;
                    float porcent[numCandidatos];

                    cout << "numCand " << numCandidatos << endl;

                    for (int i=0; i<numCandidatos; i++){
                        cout << "i: " << i << endl << endl;

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
