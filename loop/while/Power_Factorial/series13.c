// x^1/X!  + x^3/X!  + x^5/X!  -> x = 2 -> 21.000000
#include <stdio.h>

int main() {
   int n;
   int m;
   int x;
   printf("Enter a number : ");
   scanf("%d",&n);
  printf("Enter a second number : ");
  scanf("%d",&m);
  printf("Enter a third number : ");
  scanf("%d",&x);
   float power=1;
   float dev=1;
   float sum=0;
   float fact=1;
   int i = 1;
   int j=1;
   while(i<=n*2){
      fact=fact*i;
      power=power*m;
      dev=power/x;
    if(i%2!=0){
        
       sum=sum+dev;
    }
    if(i<=n){
        
       printf("%d^%d/%d!",m,j,x);
    }
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}