#include <iostream>

using namespace std;

int main()
{
    int x,jumlah_anak;
    cout<<"Masukkan jumlah Anak ayam yang akan turun :";
    cin>>jumlah_anak;
    cout<<"Mari Kita Nyanyikan Lagu Anak Ayam Turun"<<jumlah_anak<<endl;
    cout<<"Mulai!"<<endl;
    for (x=jumlah_anak;x>0;x--)
{
    if (x>1)
    cout<<"Anak Ayam Turun :"<<x<<"Mati Satu Tinggal :"<<x-1<<endl;
    else if(x=1)
    cout<<"Anak Ayam Turun 1 Mati Saty Tinggal Induknya"<<endl;
}return 0;
}
