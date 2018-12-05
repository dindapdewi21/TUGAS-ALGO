#include <stdio.h>
#include <conio.h>

int main ()
{
    int i=1;
    do{printf("harga %*rp.95=%d\n\n",i,i*95);
    i++;}
    while (i<=100);
    getch();
}
