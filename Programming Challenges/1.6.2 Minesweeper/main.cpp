#include <iostream>

using namespace std;

int main()
{
    int m,n,cont;

    cin >> m >> n;

    m+=2;
    n+=2;

    char matriz[m][n];
    int saida[m][n];

    for (int i=1; i<m-1 ; i++){
        for (int j=1; j<n-1; j++){
            cin >> matriz[i][j];
        }
    }

    for (int i=1; i<m-1 ; i++){
        for (int j=1; j<n-1; j++){
            if (matriz[i][j]== '*'){
                saida[i][j] = -1;
            }
            else{
                saida[i][j] = 0;
            }
        }
    }

    for (int i=1; i<m-1 ; i++){
        for (int j=1; j<n-1; j++){
            if (matriz[i][j]== '*'){
                if (matriz[i+1][j-1] != '*') saida[i+1][j-1]++;
                if (matriz[i+1][j] != '*') saida[i+1][j]++;
                if (matriz[i+1][j+1] != '*') saida[i+1][j+1]++;
                if (matriz[i][j+1] != '*') saida[i][j+1]++;
                if (matriz[i-1][j+1] != '*') saida[i-1][j+1]++;
                if (matriz[i-1][j] != '*') saida[i-1][j]++;
                if (matriz[i-1][j-1] != '*') saida[i-1][j-1]++;
                if (matriz[i][j-1] != '*') saida[i][j-1]++;
            }
        }
    }

    for (int i=1; i<m-1 ; i++){
        for (int j=1; j<n-1; j++){
            if (saida[i][j] == -1){
                cout << "*";
            }
            else{
                cout << saida[i][j];
            }
        }
        cout << endl;
    }

    return 0;
}


