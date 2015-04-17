#include <iostream>


using namespace std;

int main()
{
    char command='a',C;
    int M, N, X, Y, Y1, Y2;

    while(command!='I')
    {
        cin >> command;
        if(command=='X')
            return 0;
    }
    cin >> N >> M;
    char mat[M][N];
    for(int i=0;i<M;i++)
        for(int j=0;j<N;j++)
            mat[i][j]='0';

    while(command!='X')
    {
        cin >> command;
        switch (command)
        {
            case 'C':
            {
                for(int i=0;i<M;i++)
                    for(int j=0;j<N;j++)
                        mat[i][j]='0';
                break;
            }
            case 'L':
            {
                cin >> Y >> X >> C;
                mat[X-1][Y-1]=C;
                break;
            }
            case 'V':
            {
                cin >> X >> Y1 >> Y2 >> C;
                for(int i=Y1;i<=Y2;i++)
                    mat[i-1][X-1]=C;
                break;
            }
            case 'H':
            {
                int X1,X2;
                cin >> X1 >> X2 >> Y >> C;
                for(int i=X1;i<=X2;i++)
                    mat[Y-1][i-1]=C;
                break;
            }
            case 'K':
            {
                int X1,X2,Y1,Y2;
                cin >> X1 >> Y1 >> X2 >> Y2 >> C;
                for(int i=X1;i<=X2;i++)
                    for(int j=Y1;j<=Y2;j++)
                        mat[i-1][j-1]=C;
                break;
            }
            case 'F':
            {
                char aux,i1,j1;
                cin >> X >> Y >> C;
                aux=mat[X][Y];
                for(int i=0;i<M;i++)
                    for(int j=0;j<N;j++)
                    {
                        if(mat[i][j]==aux)
                        {
                            for(int k=i-1;k<=i+1;k++)
                                for(int l=j-1;l<=j+1;l++)
                                    mat[k][l]=C;
                        }
                    }
                break;

            }
            case 'S':
            {
                string Name;
                cin >> Name;
                cout << Name << endl;
                for(int i=0;i<M;i++)
                {
                    for(int j=0;j<N;j++)
                        cout << mat[i][j];
                    cout << endl;
                }
                break;
            }
        }
    }
    return 0;
}
