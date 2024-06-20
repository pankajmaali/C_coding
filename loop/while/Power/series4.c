// x^1/2 + x^2/3 + x^3/4 + x^4/5 + x^5/6  -> x = 2 -> 12.866
#include <stdio.h>

int main() {
   int n;
   int m;
   printf("Enter a number : ");
   scanf("%d",&n);
   printf("Enter a second number : ");
   scanf("%d",&m);
   float power=1;
   float dev=1;
   float sum=0;
   int i = 1;
   int j=2;
   while(i<=n){
       power=power*m;
      dev=power/j;
       sum=sum+dev;
       printf("%d^%d/%d",m,i,j);
       if(i<n)printf(" + ");
       i++;
       j++;
   }
   printf(" = %f",sum);

    return 0;
}