#include<windows.h>
#include<iostream.h>
#include<conio.h>
void main()
{
    system ("COLOR A");
    int a,n,bil,min=0
    cout<<"Nilai n =";
    cin>>n;
    for(a=1;a<=n;++a)
    {
    cout<<"Bilangan =";cin>>bil;
    if(bil>min)
    {
    min=bil;
    }
    }
    cout<<endl;
    cout<<"Bilangan Terkecil ="<<min;
    getch();
}
