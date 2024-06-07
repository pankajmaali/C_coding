#include <stdio.h>

int main() {

  int arr[5];
  int i,found,j; 

printf("Enter a number : ");
for(i = 0;i<5;i++){
    scanf("%d",&arr[i]);
}
printf("Unsorted arry \n");
for(i=0;i<5;i++){
    
    printf("%d\n",arr[i]);
}
for(i=0;i<4;i++){
    for(j = i+1;j<5;j++){
        if(arr[i]>arr[j]){
            found = arr[i];
            arr[i]=arr[j];
            arr[j]=found;
        }
    }
}
printf("Sorted arry \n");
for(i = 0;i<5;i++){
    printf("%d ",arr[i]);
}
    
    return 0;
}
