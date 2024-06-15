// x^1/1 + x^2/3 + x^3/5 + x^4/7 + x^5/9  -> x = 2 -> 10.77
#include <stdio.h>

int main() {
     int n;
   printf("Enter a number of line : ");
   scanf("%d",&n);
   int m;
   printf("Enter a number : ");
   scanf("%d",&m);
   float power=1;
   float sum = 0;
   float dev = 1;
   for(int i=1,j=1;i<=n;i++,j+=2){
       power=power*m;
       dev=power/j;
       sum=sum+dev;
       printf("%d^%d/%d",m,i,j);
       if(i<n)printf(" + ");
   }
   printf(" = %f",sum);

    return 0;
}