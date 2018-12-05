#include<iostream>
#include<conio.h>
using namespace std;
main()
{
    int f,hasil=1;
    cout<<"Masukkan bilangan faktorial : ";
    cin>>f;
    for(int c=1;c<=f;c++)
    {
        hasil=hasil*c;
    }
    cout<<"hasilnya adalah "  <<hasil;
}
