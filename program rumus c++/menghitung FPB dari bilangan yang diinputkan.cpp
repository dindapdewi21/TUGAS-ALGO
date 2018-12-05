#include<iostream>

using namespace std;

int main(int argc,char *argv[])
{
    int m,n,r;
    cout<<"Program Menghitung FPB dari 2 bilangan yang diinputkan \n\n";
    cout<<"Masukan Bilangan Pertama:";
    cin>>m;
    cout<<"Masukkan Bilangan Kedia:";
    cin>>n;
    r=m%n;
    while (r!=0)
    {
        m=n;
        n=r;
        r=m%n;
        }
        cout<<"Faktor Persekutuan Terbesar Adalah :"<<n<<"\n";
        return 0;
}
