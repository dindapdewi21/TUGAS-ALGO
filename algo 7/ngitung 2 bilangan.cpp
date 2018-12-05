#include<iostream>

double hasil (int A,int B);
main()
{
    int x,y;
    double z;
    cout<<"\n masukkan nilai x:";cin>>x;
    cout<<"\n masukan nilai y:";cin>>y;

    z = hasil(x,y);
    cout<<"\n hasil perkalian ";

    cout<<x<<" x "<<y<<" = "<<z;
    getch ();
}
    double hasil (int A,int B)
{
    return (A*B);
}
