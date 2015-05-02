    #include <iostream>
    #define maX 1000000
    using namespace std;

    int main()
    {
        int a,b,from,to,maximo=1,ciclo=0;
        string trash;

        while(cin >> a >> b){
            if(a > 0 && a < maX && b > 0 && b < maX){
                maximo = 1;
                if(a > b){
                    from = b;
                    to = a;
                }else{
                    from = a;
                    to = b;
                }
                for(int i=from;i<=to;i++)
                {
                    for(int j=i;j!=1;ciclo++)
                    {
                        if(j%2==0)
                            j/=2;
                        else if(j%2==1)
                            j=(j*3)+1;
                    }
                    if(ciclo>maximo)
                        maximo=ciclo;
                    ciclo=0;
                }
                cout << a << " " << b << " " << maximo+1 << endl;
            }
        }
        return 0;
    }
