// Online C compiler to run C program online
#include <stdio.h>
void myArray(int outer,int inner){
   int arr[outer][inner];
    for(int i=0;i<outer;i++){
        for(int j=0;j<inner;j++){
            printf("Enter a element of array [%d]: ",i);
            scanf("%d",&arr[i][j]);
        }
    }
     for(int i=0;i<outer;i++){
        for(int j=0;j<inner;j++){
            printf("%d",arr[i][j]);
        }
    }
 
}
int main() {
    int outer,inner;
    printf("Enter a outer/inner array size : ");
    scanf("%d %d",&outer,&inner);
  
myArray(outer,inner);
    return 0;
}