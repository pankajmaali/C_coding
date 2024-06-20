//  x^1/1 + x^2/3 + x^3/5 + x^4/7 + x^5/9  -> x = 2 -> 10.77
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
      dev=power/j;
       sum=sum+dev;
       printf("%d^%d/%d",m,i,j);
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}