
#include <stdio.h>

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d",&n);
      int i = 1;
  do{
  
      i++;
       int j = 1;
      do{
         
          j++;
          printf("*");
      }while(j<=i-1);
      printf("\n");
  }while(i<=n);

    return 0;
}