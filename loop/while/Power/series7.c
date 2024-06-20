//   1/x^1 + 3/x^2 + 5/x^3 + 7/x^4 + 9/x^5  -> x = 2 -> 2.59375
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
      dev=j/power;
       sum=sum+dev;
       printf("%d/%d^%d",j,m,i);
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}