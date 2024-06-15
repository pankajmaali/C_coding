// 1/x^1 + 3/x^2 + 5/x^3 + 7/x^4 + 9/x^5  -> x = 2 -> 2.59375
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
   for(int i = 1,j=1;i<=n;i++,j+=2){
       power=power*m;
       dev=j/power;
       sum=sum+dev;
       printf("%d/%d^%d",j,m,i);
       if(i<n)printf(" + ");
   }
   printf(" = %f",sum);

    return 0;
}