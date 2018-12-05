#include <iostream>
using namespace std;
int main()
{
    int hari, jam, menit, detik;
    cout<<"masukkan hari =";
    cin>>hari;
    cout<<"masukkan jam =";
    cin>>jam;
    cout<<"masukkan menit =";
    cin>>menit;
    hari = hari*86400;
    jam = jam*3600;
    menit = menit*60;
    cout<<"hasil konversi dari hari ke detik="<<hari<<endl;
    cout<<"hasil konversi dari jam ke detik="<<jam<<endl;
    cout<<"hasil konversi dari menit ke detik="<<menit<<endl;
    return 0;
}
