#include <iostream>
using namespace std;

int main()
{
    float C,F,R;
    cout<<"program konversi suhu"<<endl;
    cout<<"dinda puspita dewi"<<endl<<endl;
    cout<<"masukkan nilai celciusnya = ";
    cin>>C;
    F=C*1.8 + 32;
    R=C*0.8;
    cout<<"nilai Fahrenheit = "<<F<<endl<<"nilai Reamur = "<<R;
    return 0;
}
