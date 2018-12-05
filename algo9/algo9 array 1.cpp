#include<iostream>
using namespace std;


int main(){
int i,bil[13],jumlah,max,min;
float rata;

for(i=0; i<13; i++){
    cout<<"masukkan data ke:"<<i+1<<" = ";cin>>bil[i];

}
cout<<"seluruh elemen array :\n";
jumlah=0;
max=bil[0];
min=bil[0];
for(i=0;i<13;i++)
{
    cout<<bil[i]<<endl;
    jumlah=jumlah+bil[i];
    if(bil[i]<min){
        min=bil[i];
    }
else if(bil[1]> min)
    {
    min=bil[i];
    }
}

rata=jumlah/13;
cout<<"jumlah seluruh elemen array : "<<jumlah<<endl;
cout<<"nilai maksimum seluruh elemen array : "<<min<<endl;
cout<<"nilai rata-rata seluruh elemen array : "<<rata<<endl;

return 0;
}
