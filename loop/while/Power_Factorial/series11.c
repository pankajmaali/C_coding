//x^1/1  + x^3/3  + x^5/5  -> x = 2 -> 11.066668
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
   float fact=1;
   int i = 1;
   int j=1;
   while(i<=n*2){
    //   fact=fact*i;
      power=power*m;
      dev=power/i;
    if(i%2!=0){
        
       sum=sum+dev;
    }
    if(i<=n){
        
       printf("%d^%d/%d",m,j,j);
    }
       if(i<n)printf(" + ");
       i++;
       j+=2;
   }
   printf(" = %f",sum);

    return 0;
}