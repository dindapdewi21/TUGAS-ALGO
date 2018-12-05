#include<stdio.h>
#include<conio.h>

using namespace std;
int ulang (int n);

int main (void)
{
    int n;
    printf("============================DINDA PUSPITA DEWI====================");
    printf("=========================MENAMPILKAN TULISAN ALGORITMA SEBANYANK 30 KALI======================");
    printf("masukkan nilai (n) :");
    scanf ("%d",&n);
    ulang (n);
    getch ();
}

    int ulang (int n)
    {
        int i;
        for(i=1;i<=n;i++)
        printf("Algoritma pemograman\n");
        return (i);
    }
