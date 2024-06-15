//  1!/x^1 + 2!/x^2 + 3!/x^3 + 4!/x^4 + 5!/x^5  -> x = 2 -> 7.0
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
   float fact = 1;
   float tl=0;
   for(int i=1,j=1;i<=n;i++,j++){
       fact=fact*i;
       tl=fact;
       power=power*m;
       dev=tl/power;
       sum=sum+dev;
       printf("%d!/%d^%d",i,m,j);
       if(i<n)printf(" + ");
       
   }
   printf(" = %f",sum);
    return 0;
}