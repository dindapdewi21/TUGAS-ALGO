#include <stdio.h>
#include <string.h>
#include <ctype.h>

char a[100];
int b,c;
int main ()
{
    printf ("Masukkan Kata:");
    gets (a);
    strrev (a);
    printf ("Balikkan Kata:%s",a);

    return 0;
}
