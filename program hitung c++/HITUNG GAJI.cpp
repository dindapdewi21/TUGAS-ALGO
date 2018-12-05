#include<iostream>

#include<iomanip>

using namespace std;

int main ()

{

const double GAJI_PER_JAM = 5000;
double jam, gaji;
cout<<"\n<=======================_PROGRAM HITUNG GAJI PEGAWAI PERJAM_===================>\n"<<endl;
cout<<"==============================================================================="<<endl;
cout << "======>_BERAPA JAM YANG INGIN ANDA HITUNG: ";
cin >> jam;
gaji = jam * GAJI_PER_JAM;
cout<<endl;
cout << "=========>_GAJI PEGAWAI DALAM  " << jam << " JAM ADALAH = " <<gaji <<" Rupiah \n";
cout<<endl;
cout<<"<===================================================================================>"<<endl;
cout<<"<========================>dinda puspita dewi.pelitabangsa.ac.id<====================>"<<endl;
return 0;

}
