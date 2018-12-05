#include<iostream>
using namespace std;
int main()
{
    int prima;
    int i,h;
    cout<<"Program menampilkann bilangan prima dari 1-100"<<endl;
    for ( i = 2; i<=100; i++){
prima = 0;
    for ( h = 2; h < i; h++){
 if ( i % h == 0)
    prima = 1;

    }
    if (prima == 0)
        cout<<i<<'\t';
    }
    return 0;
}
