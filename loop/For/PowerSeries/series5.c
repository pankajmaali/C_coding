// 2/x^1 + 3/x^2 + 4/x^3 + 5/x^4 + 6/x^5  -> x = 2 -> 2.75
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
   for(int i=1,j=2;i<=n;i++,j++){
       power=power*m;
       dev=j/power;
       sum=sum+dev;
       
   }
   printf("%f",sum);

    return 0;
}