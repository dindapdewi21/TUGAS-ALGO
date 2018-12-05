#include <iostream>
using namespace std;

int main()
{
    float C,F,R;
    cout<<"Program Konversi Suhu"<<endl;
    cout<<"Dinda Puspita Dewi"<<endl<<endl;
    cout<<"Masukkan nilai celciusnya = ";
    cin>>C;
    F=C*1.8 + 32;
    R=C*0.8;
    cout<<"nilai farenheit = "<<F<<endl<<"nilai reamur = "<<R;
    return 0;
}
