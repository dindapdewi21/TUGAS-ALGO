#include<iostream>
using namespace std;
float rupiah (float x);

int main()

{
    float n;
    cout<<"KONVERSI MATA UANG"<<endl;
    cout<<"MASUKKAN DOLLAR = ";
    cin>>n;
    cout<<"="<<"Rp"<<rupiah(n)<<endl;
    cout<<endl;

    return 0;
}
float rupiah (float x)
{
cout<<"Hasil mata uang dollar ke rupiah ";
float hasil;
hasil= x*15100;
return hasil;
}
