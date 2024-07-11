// 1 – 2 + 3  - 4 + 5 = -3
#include <stdio.h>

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
  int i=1;
  int sum=0;
  
  do{
      printf("%d",i);
      if(i%2==0){
          sum+=i;
          if(i<n){

          printf(" + ");
          }
      }
      else{
          sum-=i;
      }
      if(i<n&&i%2!=0){
          printf(" - ");
      }
      i++;
      
  }while(i<=n);
  printf(" = %d",sum);

    return 0;
}