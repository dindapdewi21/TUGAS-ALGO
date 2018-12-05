#include<iostream>

using namespace std;

int main()
{
    int x,jumlah_anak;
    cout<<"Masukkan jumlah anak ayam yang akan turun :";
    cin>>jumlah_anak;
    cout<<"Mari kita nyanyikan lagu anak ayam turun"<<jumlah_anak<<endl;
    cout<<"Mulai !!!"<<endl;
    for (x=jumlah_anak;x>0;x--)
{
    if (x>1)
    cout<<"Anak ayam turun :"<<x<<"Mati satu tinggal :"<<x-1<<endl;
    else if(x=1)
    cout<<"Anak ayam turun 1 mati satu tinggal induknya"<<endl;
}return 0;
}
