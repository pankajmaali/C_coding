// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int arr[5]={1,5,6,8,9};
    int search,found=0,index;
    printf("Enter a number : ");
    scanf("%d",&search);
    for(int i=0;i<5;i++){
        if(search==arr[i]){
            found=1;
            index=i;
            break;
        }
        
    }
    if(found==1){
        
    printf("found Index number is : %d",index);
    }
    else{
        printf("Not Found");
    }
    
    return 0;
}