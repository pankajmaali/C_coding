//  x^1  + x^3  + x^5  -> x = 2 -> 42
#include <stdio.h>

int main() {
     int n;
  int m;
  printf("Enter a number of line : ");
  scanf("%d",&n);
   printf("Enter a number of value : ");
  scanf("%d",&m);
//   float fact = 1;
  float dev=1;
  float power = 1;
  int sum = 0;
  for(int i = 1,j=1;i<=n*2-1;i++,j+=2){
      power=power*m;
      if(i%2!=0){
          sum=sum+power;
      }
      if(i<=n)printf("%d^%d",m,j);
      if(i<n)printf(" + ");
  }
  printf(" = %d",sum);

    return 0;
}