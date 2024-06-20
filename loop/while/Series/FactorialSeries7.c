// 2/1! + 4/2! + 6/3! + 8/4! +10/5!  -> 5.41667
#include <stdio.h>

int main() {
   int n;

   printf("Enter a number : ");
   scanf("%d",&n);
   float fact=1;
   float dev=1;
   float sum=0;
      int i = 1;
   int j=2;
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