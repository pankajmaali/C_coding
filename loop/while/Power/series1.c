//	 x^1 + x^2 + x^3 + x^4 + x^5  -> x = 2 -> 62
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
    //   dev=i/power;
       sum=sum+power;
       printf("%d^%d",m,i);
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}