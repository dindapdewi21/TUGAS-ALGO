#include<stdio.h>
main (){
    int data [50];
    int max,min;
    //masukkan untuk batas printif("jumlah bilangan yang dimasukkan:");
    scanf ("%d",&a);
    //pengulangan memasukkan data ke dalam array
    for (b=1;b<=a;b++){
    printf("\n\nbilangan ke-%d: ",b);
    scanf ("%d",&data[b]);
}
    //mencari nilai terbesar dan terkecil di array dengan looping
    max=data[1];
    min=data[1];
    for(b=1;b<=a;b++)
    if(data[b]>=max){
    max=data[b];
}
    else if (data[b]<=min){
    min=data[b];
}
printf("\n\nnilai tertinggi:%d",max);
printf("\n\nnilai terrendah:%d",min);
return 0;
}
