#include<iostream>
#include<cmath>
using namespace std;

int MengubahDesimalKeBiner (long long) ;

int main ( )
{
    long long n ;
    cout << "Masukkan Bilangan Biner :";
    cin >> n ;
    cout << n << " Dalam Desimal = " << MengubahDesimalKeBiner (n) <<" Dalam Biner " ;
    return 0;
}
int MengubahDesimalKeBiner (long long n)
{
    int nomorbiner = 0 , i = 0 , remainder ;
    while (n!=0)
    {
        remainder =n\2 ;
        n /= 2 ;
        nomorbiner+=remainder*pow(10,i);
        ++i ;
    }
    return nomorbiner;
}


