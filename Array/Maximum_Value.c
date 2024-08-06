
#include <stdio.h>

int main() {
int arr[5]={5,55,80,60,7};
int max=arr[0];
int idx;
for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
        idx=i;
    }
}
printf("Max Value Is : %d\n",max);
printf("Index Number is : %d",idx);
    return 0;
}