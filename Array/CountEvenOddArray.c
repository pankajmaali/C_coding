// WAP to count even and odd value of array
#include <stdio.h>

int main() {
   int arr[10]={1,5,8,6,3,4,8,2,6,9};
   int Ecount=0,Ocount=0;
   for(int i=0;i<10;i++){
       if(arr[i]%2==0){
           Ecount++;
       }
       else{
           Ocount++;
       }
   }
   printf(" Even Number is %d\n",Ecount);
    printf(" Odd Number is %d\n",Ocount);

    return 0;
}