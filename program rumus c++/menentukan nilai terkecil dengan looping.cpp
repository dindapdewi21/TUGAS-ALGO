#include<stdio.h>
#include<stdlib.h>

int main ()
{
    int Bil[5] = (5,3,1,4,2) , K ,B,Tmax,Tmin;
    B = 0;
    while(B<5){
            K = 0;
            Tmax = 0;
            Tmin = 0;
        do{
            if (Bil[B] > Bil[K] ){
                Tmax++;
            }
            else if ( Bil[B] < Bil[K] ){
                Tmin++;
            }
         K++;
        }
        while(K<5);
            if ( Tmax == 4){
                printf("Angka Terbesar %d\n",Bil[B]);   //Angka Terbesar
            }
            else if (Tmin == 4){
                printf ("Angka Terkecil %d\n",Bil[B]); //Anhka Terkecil
            }
            B++;
    }
}
