
#include <stdio.h>

int main() {
  int n,found = 0;
  int arr[5] = {2,8,6,4,3,};
  printf("Enter a number you found : ");
  scanf("%d",&n);
  for(int i = 0;i<n;i++){
      if(arr[i]==n){
          found = 1;
      }
  }
  if(found){
      printf("Yes number is found ");
  }
  else{
      printf("No number is Not found ");
  }
  
 

    return 0;
}