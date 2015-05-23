#include <iostream>

using namespace std;

void calculaSegundos(int *hf,int *mf,int *sf,int si)
{
    if(*sf>=si)
        *sf=*sf-si;
    else if(*mf>0)
    {
        *mf=*mf-1;
        *sf=(*sf+60-si);
    }
    else if(mf==0)
    {
        *hf=*hf-1;
        *mf=59;
        *sf=(*sf+60-si);

    }
}

void calculaMinutos(int *df,int *hf,int *mf,int mi)
{
    if(*mf>=mi)
        *mf=*mf-mi;
    else if(*hf>0)
    {
        *hf=*hf-1;
        *mf=*mf+60-mi;
    }
    else if(hf==0)
    {
        *df=*df-1;
        *hf=24;
        *mf=*mf+60-mi;
    }

}

void calculaHoras(int *df,int *hf,int hi)
{
    int sub;
    if(*hf>=hi)
        *hf=*hf-hi;
    else
    {
        *df=*df-1;
        *hf=*hf+24-hi;
    }
}

void calculaDias(int *df,int di)
{
    *df=*df-di;
}

int main()
{
    int di,df,hi,hf,mi,mf,si,sf;
    string lixo;

    cin >> lixo >> di;
    cin >> hi >> lixo >> mi >> lixo >> si;
    cin >> lixo >> df;
    cin >> hf >> lixo >> mf >> lixo >> sf;

    calculaSegundos(&hf,&mf,&sf,si);
    calculaMinutos(&df,&hf,&mf,mi);
    calculaHoras(&df,&hf,hi);
    calculaDias(&df,di);
    cout << df << " dia(s)" << endl;
    cout << hf << " hora(s)" << endl;
    cout << mf << " minuto(s)" << endl;
    cout << sf << " segundo(s)" << endl;

    return 0;
}
