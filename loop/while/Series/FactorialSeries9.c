//1/1! + 3/2! + 5/3! + 7/4! + 9/5!  -> 3.7
#include <stdio.h>

int main() {
   int n;

   printf("Enter a number : ");
   scanf("%d",&n);
   float fact=1;
   float dev=1;
   float sum=0;
      int i = 1;
   int j=1;
   while(i<=n){
       fact=fact*i;
       dev=j/fact;
       sum=sum+dev;
       printf("%d/%d!",j,i);
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}