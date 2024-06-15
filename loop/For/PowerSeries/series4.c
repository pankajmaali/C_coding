//   x^1/2 + x^2/3 + x^3/4 + x^4/5 + x^5/6  -> x = 2 -> 12.866
#include <stdio.h>

int main() {
   int n;
   printf("Enter a line number : ");
   scanf("%d",&n);
   int m;
   printf("Enter a number : ");
   scanf("%d",&m);
   float power=1;
   float sum=0;
   float dev=1;
   
   for(int i=1,j=2;i<=n;i++,j++){
   power=power*m;
   dev=power/j;
   sum=sum+dev;
  printf("%d^%d/%d",m,i,j);
  if(i<n)printf(" + ");
       
   }
   printf(" = %f",sum);
    return 0;
}