#include<iostream>
using namespace std;
typedef struct pecahan{
    int pembilang;
    int penyebut;


};
int main(int argc, char * argv[])
{
    pecahan p1,p2;
    cout<<"==================================DINDA PUSPITA DEWI======================"<<endl;
    cout<<"=====================MENGUBAH BILANGAN PECAHAN MENJADI BILANGAN BULAT==========="<<endl;
    cout<<"Masukkan pembilang = ";cin>>p1.pembilang;
    cout<<"Masukkan penyebut = ";cin>>p2.penyebut;
    cout<<"\t   "<<p1.pembilang<<endl;
    cout<<"\t p1=_"<<endl;
    cout<<"\t   "<<p2.penyebut<<endl;

    if("/")
    {
        cout<<"Hasil nya adalah = "<<(p1.pembilang)/(p2.penyebut)<<endl;

    }
    return 0;
}


