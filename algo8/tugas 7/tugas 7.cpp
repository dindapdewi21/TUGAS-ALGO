#include<stdio.h>

int JUMLAH (int X , int Y);

int main(){
   int A,B,T;
   A=5; B=2;
   T = JUMLAH (A,B);
   printf("%d",T);
}
int JUMLAH(int X, int Y){
int H;
H = X + Y;
return (H);
}
