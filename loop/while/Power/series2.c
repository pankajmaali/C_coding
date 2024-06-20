//  x^1/1 + x^2/2 + x^3/3 + x^4/4 + x^5/5  -> x = 2 -> 17.066668
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
   int j=1;
   while(i<=n){
       power=power*m;
      dev=power/i;
       sum=sum+dev;
       printf("%d^%d/%d",m,i,i);
       if(i<n)printf(" + ");
       i++;
       j++;
   }
   printf(" = %f",sum);

    return 0;
}