#include <iostream>

using namespace std;

int main()
{
    int cpf, prid, segd, terd, quad, quid, sexd, setd, oitd, nond, pdv, sdv, ps, ss, resdiv, t;
    cout<<"Codigo desenvolvido por: \n\tRogerio F. Borges Jr. \n\tNatan Nilo Martins \n\tVinicius Henrique S. Guapiano";
    cout<<"\nDigite seu CPF(9 digitos): "<< endl;
    cin>>cpf;
    if(cpf<10000000 or cpf>=1000000000){
        cout<<"CPF invalido!";
    }else{
        nond=cpf%10;
        t=cpf/10;
        oitd=t%10;
        t=t/10;
        setd=t%10;
        t=t/10;
        sexd=t%10;
        t=t/10;
        quid=t%10;
        t=t/10;
        quad=t%10;
        t=t/10;
        terd=t%10;
        t=t/10;
        segd=t%10;
        prid=t/10;
        ps= (prid*10) + (segd*9) + (terd*8) + (quad*7) + (quid*6) + (sexd*5) + (setd*4) + (oitd*3) + (nond*2);
        resdiv=ps%11;
        if(resdiv<2){
            pdv=0;
        } else {
            pdv=11-resdiv;
        }
        ss= (prid*11) + (segd*10) + (terd*9) + (quad*8) + (quid*7) + (sexd*6) + (setd*5) + (oitd*4) + (nond*3) + (pdv*2);
        resdiv=ss%11;
        if(resdiv<2){
            sdv=0;
        } else {
            sdv=11-resdiv;
        }
        cout<<"\nSeu CPF(com digito verificador): "<<prid<<segd<<terd<<"."<<quad<<quid<<sexd<<"."<<setd<<oitd<<nond<<"-"<<pdv<<sdv;
    }
    return 0;
}
