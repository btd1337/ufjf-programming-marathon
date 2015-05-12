    #include <iostream>
    using namespace std;

    int main()
    {
        long a,b,from,to,maximo=1,ciclo=0;
        int i = 0, j = 0;

        while(cin >> a >> b){
            if(a > 0 && a < 1000000 && b > 0 && b < 1000000){
                maximo = 1;
                if(a > b){
                    from = b;
                    to = a;
                }else{
                    from = a;
                    to = b;
                }
                for(i=from;i<=to;i++)
                {
                    for(j=i;j!=1;ciclo++,j=(j%2?j*3+1:j/2));
                    if(ciclo>maximo)
                        maximo=ciclo;
                    ciclo=0;
                }
                cout << a << " " << b << " " << maximo+1 << endl;
            }
        }
        return 0;
    }
