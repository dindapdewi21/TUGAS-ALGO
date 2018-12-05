#include<stdio.h>
#include<conio.h>
#define nMax 10
int main()
{
    int tampung[nMax+1];
    int a,i,max,min,z;

    printf("masukkan angka :");
    scanf("%d",%a);
    i=1;
    while(a!=0){
    tampung [i] =a;
    system("cls");
    printf("masukkan angka:");
    scanf("%d",&a);
    i++
    }
    max =0;
    min =999;

    for(z=1;z<=i-1;z++){
    if(tampung[z] <max){
    max = tampung[z];
    }
    if(tampung[z]<min){
    min = tampung[z];
    }
    }

    printf ("\n");
    printf ("Bilangan Terbesar :%d\n",max);
    printf ("Bilangan Terkecil :%d",min)
}
