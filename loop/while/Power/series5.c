// 2/x^1 + 3/x^2 + 4/x^3 + 5/x^4 + 6/x^5  -> x = 2 -> 2.75
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
      dev=j/power;
       sum=sum+dev;
       printf("%d/%d^%d",j,m,i);
       if(i<n)printf(" + ");
       i++;
       j++;
   }
   printf(" = %f",sum);

    return 0;
}