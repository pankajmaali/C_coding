//1/1! + 2/2! + 3/3! + 4/4! + 5/5! -> 2.7083335
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
       dev=i/fact;
       sum=sum+dev;
       printf("%d/%d!",i,i);
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}