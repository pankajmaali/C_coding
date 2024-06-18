//     	  X!/x^1  + X!/x^3  + X!/x^5  -> x = 2 ->  1.312500
#include <stdio.h>

int main() {
     int n = 3;
  int m = 2;
//   int x = 2;
//   printf("Enter a number of line : ");
//   scanf("%d",&n);
//   printf("Enter a number of value : ");
//   scanf("%d",&m);
//   printf("Enter a third value : ");
//   scanf("%d",&x);
  float fact = 1;
  float dev=1;
  float power = 1;
  float sum = 0;
  for(int i = 1,j=1;i<=n*2-1;i++,j+=2){
    fact=fact*i;
      power=power*m;
      dev=m/power;
      if(i%2!=0){
          
          sum=sum+dev;
      }
      if(i<=n)printf("%d!/%d^%d",m,m,j);
      if(i<n)printf(" + ");
  }
  printf(" = %f",sum);

    return 0;
}