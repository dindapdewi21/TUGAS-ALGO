#include <stdio.h>

void tukar(int array[2]){
    int t=array[0];
    array[0]=array[1];
    array[1]=t;


}
int main(){
    int array[2]={1,2};
    printf("Before %d - %d \n",array[0],array[1]);
    tukar(array);
    printf("After %d - %d",array[0],array[1]);

}
