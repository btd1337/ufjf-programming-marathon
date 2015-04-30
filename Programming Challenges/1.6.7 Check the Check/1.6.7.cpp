#include <iostream>

using namespace std;

bool verificaCheck(char chessboard[][8],bool *bkChecked,bool *wkChecked)
{
    for(int i=0;i<0;i++)
        for(int j=0;j<0;j++)
        {
            switch(chessboard[i][j])
            {
                case 'p':
                {
                    if(chessboard[i-1][j-1]=='K' || chessboard[i-1][j+1]=='K');
                    {
                        *wkChecked=true;
                        return true;
                    }
                    break;
                }
                case 'P':
                {
                    if(chessboard[i-1][j-1]=='k' || chessboard[i-1][j+1]=='k');
                    {
                        *bkChecked=true;
                        return true;
                    }
                    break;
                }
                case 'n':
                {
                    if(chessboard[i-1][j-2]=='K' || chessboard[i-1][j+2]=='K' || chessboard[i-2][j-1]=='K' || chessboard[i-2][j+1]=='K' || chessboard[i+1][j-2]=='K' || chessboard[i+1][j+2]=='K' || chessboard[i+2][j-1]=='K' || chessboard[i+2][j+1]=='K')
                    {
                        *wkChecked=true;
                        return true;
                    }
                    break;
                }
                case 'N':
                {
                    if(chessboard[i-1][j-2]=='k' || chessboard[i-1][j+2]=='k' || chessboard[i-2][j-1]=='k' || chessboard[i-2][j+1]=='k' || chessboard[i+1][j-2]=='k' || chessboard[i+1][j+2]=='k' || chessboard[i+2][j-1]=='k' || chessboard[i+2][j+1]=='k')
                    {
                        *bkChecked=true;
                        return true;
                    }
                    break;
                }

                case 'b':
                {
                    for (int k=1;k<8;k++){
                        if(chessboard[i+k][j+k]=='K'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i+m][j-m] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i+k][j-k]=='K'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i+m][j-m] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j-k]=='K'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][i-m] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j+k]=='K'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][k+m] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                    }
                    break;
                }

                case 'B':
                {
                    for (int k=1;k<8;k++){
                        if(chessboard[i+k][j+k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i+m][j-m] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i+k][j-k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i+m][j-m] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j-k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][i-m] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j+k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][k+m] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                    }
                    break;
                }

                case 'q':
                {
                    for (int k=1;k<8;k++){
                        if(chessboard[i+k][j]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i+m][j] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i+k][j+k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i+m][j+m] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i][j+k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i][j+m] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j+k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][j+m] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][j] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j-k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][j-m] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i][j-k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i][j-m] != '.'){
                                   return false;
                                }
                            }
                            *wkChecked = true;
                            return true;
                        }
                        if(chessboard[i+k][j-k]=='k'){

                        }
                            *wkChecked=true;
                            return true;
                    }
                    break;
                }

                case 'Q':
                {
                    for (int k=1;k<8;k++){
                        if(chessboard[i+k][j]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i+m][j] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i+k][j+k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i+m][j+m] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i][j+k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i][j+m] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j+k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][j+m] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][j] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i-k][j-k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i-m][j-m] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i][j-k]=='k'){
                            for (int m=k-1;k>0;m--){
                                if (chessboard[i][j-m] != '.'){
                                   return false;
                                }
                            }
                            *bkChecked = true;
                            return true;
                        }
                        if(chessboard[i+k][j-k]=='k'){

                        }
                            *bkChecked=true;
                            return true;
                    }
                    break;
                }
                case 'r':
                    for(int k = 1; k < 8; k++){
                        if(chessboard[i][j+k] != '.' || chessboard[i+k][j] == '.'){
                            *bkChecked = false;
                        }else if(chessboard[i][j+k] == 'K' || chessboard[i+k][j] == 'K'){
                            *bkChecked = true;
                            return true;
                        }

                        if(chessboard[i][j-k] != '.' ||chessboard[i-k][j] != '.'){
                            *bkChecked = false;
                        }else if (chessboard[i][j-k] == 'K' ||chessboard[i-k][j] == 'K'){
                            *bkChecked = true;
                            return true;
                        }
                        return false;
                    }
                    break;
                case 'R':
                    for(int k = 1; k < 8; k++){
                        if(chessboard[i][j+k] != '.' || chessboard[i+k][j] == '.'){
                            *bkChecked = false;
                        }else if(chessboard[i][j+k] == 'k' || chessboard[i+k][j] == 'k'){
                            *bkChecked = true;
                            return true;
                        }

                        if(chessboard[i][j-k] != '.' ||chessboard[i-k][j] != '.'){
                            *bkChecked = false;
                        }else if (chessboard[i][j-k] == 'k' ||chessboard[i-k][j] == 'k'){
                            *bkChecked = true;
                            return true;
                        }
                        return false;
                    }
                    break;

            }
        }
        return false;
}

int main()
{
    char chessboard[8][8];
    int cont,nJogo=0;
    bool continuaJogo=true, bkChecked=false, wkChecked=false;

    while(continuaJogo)
    {
        cont=0;
        for(int i=0;i<8;i++)
            for(int j=0;j<8;j++)
            {
                cin >> chessboard[i][j];
                if(chessboard[i][j]=='.')
                    cont++;
                if(cont==64)
                    continuaJogo=false;
            }
        nJogo++;
        if(verificaCheck(chessboard,&bkChecked,&wkChecked) && bkChecked)
            cout << "Game #" << ": " << nJogo << "black king is in check." << endl;
        else if(verificaCheck(chessboard,&bkChecked,&wkChecked)&& wkChecked)
            cout << "Game #" << ": " << nJogo << "white king is in check." << endl;

    }


    return 0;
}
