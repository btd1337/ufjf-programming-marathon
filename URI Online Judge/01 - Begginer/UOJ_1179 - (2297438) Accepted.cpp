#include <iostream>

using namespace std;

int main()
{
    int par[5],impar[5],x,contPar=0,contImpar=0;
    for(int i=0;i<15;i++){
        cin >> x;
        if(x%2==0){
            if(contPar==4){
                par[contPar]=x;
                for(int j=0;j<5;j++){
                    cout << "par[" << j << "] = " << par[j] << endl;
                }
                contPar=0;
            }
            else{
                par[contPar]=x;
                contPar++;
            }
        }
        else{
            if(contImpar==4){
                impar[contImpar]=x;
                for(int j=0; j<5; j++){
                    cout << "impar[" << j << "] = " << impar[j] << endl;
                }
                contImpar=0;
            }
            else{
                impar[contImpar]=x;
                contImpar++;
            }

        }
    }
    for(int i=0; i<contImpar; i++){
        cout << "impar[" << i << "] = " << impar[i] << endl;
    }
    for(int i=0; i<contPar; i++){
        cout << "par[" << i << "] = " << par[i] << endl;
    }
    return 0;
}
