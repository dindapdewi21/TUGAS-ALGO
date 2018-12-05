#include <iostream>
using namespace std;
typedef struct pecahan{
   int pb,pb1,pb2,pb3,pb4,pb5;

    };
int main(int argc,char*argv[])
{
pecahan P1,P2,P3;
    cout<<"Masukkan Pembilang P1=";
    cin>>P1.pb;
    cout<<"Masukkan Penyebut P1= ";
    cin>>P1.pb1;

    cout<<"\t     "<<P1.pb <<endl;
    cout<<"\tP1 = -"<<endl;
    cout<<"\t     " << P1.pb1 <<endl;

    cout<<"\nMasukkan Pembilang P2 = ";
    cin>>P2.pb2;       //pembilang P2
    cout<<"Masukkan Penyebut P2 = ";
    cin>>P2.pb3;

    cout<<"\t     "<<P2.pb2  <<endl;
    cout<<"\tP2 = -"<<endl;
    cout<<"\t     "<< P2.pb3 <<endl;

    cout <<"                   " <<P1.pb<<"\t" <<P2.pb2<<endl;
    cout <<"\t P1 x P2 = -" << " x  -" <<endl;
    cout <<"\t           " <<P1.pb1<<"\t"<<P2.pb3<<endl;

    P3.pb4=float(P1.pb)*P2.pb2;
    P3.pb5=float(P1.pb1)*P2.pb3;

    //tampilan P3 =hasil perkalian
    cout<<"Hasil Perkalian P1 * P2 Adalah"<<endl;
    cout<<"\t     "<<P3.pb4<<endl;
    cout<<"\tP3=  -"<<endl;
    cout<<"\t     "<<P3.pb5<<endl;

    return 0;
}
